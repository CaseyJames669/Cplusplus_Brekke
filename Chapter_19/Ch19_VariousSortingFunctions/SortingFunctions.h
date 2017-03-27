
template<class elemType>
int orderedArrayListType<elemType>::binarySearch(const elemType& item)
{
	int first = 0;
	int last = length - 1;
	int mid;

	bool found = false;

	while (first <= last && !found)
	{
		mid = (first + last) / 2;

		if (list[mid] == item)
			found = true;
		else
			if (list[mid] > item)
				last = mid - 1;
			else
				first = mid + 1;
	}

	if (found)
		return mid;
	else 
		return -1;
}// end binarySearch

template<class elemType>
void orderedArrayListType<elemType>::insertOrd(const elemType& item)
{
	int first = 0;
	int last = length - 1;
	int mid;

	bool found = false;

	if (length == maxSize)
		cout << "Cannot insert into a full list." << endl;
	else
	{
		while (first <= last && !found)
		{
			mid = (first + last) / 2;

			if (list[mid] == item)
				found = true;
			else
				if (list[mid] > item)
					last = mid - 1;
				else
					first = mid + 1;
		}//end while

		if (found)
			cout << "The Item to be inserted is already in " 
			     << "the list." << endl 
				 << "Duplicates not allowed." << endl;
		else
		{
			if (list[mid] < item)
				mid++;
			insertAt(mid, item);
		}
	}
}//end insertOrd

template<class elemType>
void orderedArrayListType<elemType>::selectionSort()
{
	int loc, minIndex;

	for (loc = 0; loc < length; loc++)
	{
		minIndex = minLocation(loc, length - 1);
		swap(loc, minIndex);
	}
}

template<class elemType>
void orderedArrayListType<elemType>::swap(int first, int second)
{
	elemType temp;

	temp = list[first];
	list[first] = list[second];
	list[second] = temp;
}

template<class elemType>
int orderedArrayListType<elemType>::minLocation(int first, int last)
{
	int loc, minIndex;

	minIndex = first;

	for (loc = first + 1; loc <= last; loc++)
		if (list[loc] < list[minIndex])
			minIndex = loc;

	return minIndex;
}

template<class elemType>
void orderedArrayListType<elemType>::insertionSort()
{
	int unsortedIndex, location;
	elemType temp;

	for (unsortedIndex = 1; unsortedIndex < length; unsortedIndex++)
		if (list[unsortedIndex] < list[unsortedIndex - 1])
		{
			temp = list[unsortedIndex];
			location = unsortedIndex;

			do
			{
				list[location] = list[location - 1];
				location--;
			} while(location > 0 && list[location - 1] > temp);

			list[location] = temp;
		}
}

template<class elemType>
void orderedLinkedListType<elemType>::linkedInsertionSort()
{
	nodeType<elemType> *lastInOrder;
	nodeType<elemType> *firstOutOfOrder;
	nodeType<elemType> *current;
	nodeType<elemType> *trailCurrent;

	int x = 0;

	lastInOrder = first;

	if (first == NULL)
		cout << "Cannot sort an empty list" << endl;
	else
		if (first->link == NULL)
			cout << "List is of length 1. Already in order" << endl;
		else
			while (lastInOrder->link != NULL)
			{
				firstOutOfOrder = lastInOrder->link;
 
				if (firstOutOfOrder->info < first->info)
				{
					lastInOrder->link = firstOutOfOrder->link;
					firstOutOfOrder->link = first;
					first = firstOutOfOrder;
				}
				else
				{
					trailCurrent = first;
					current = first->link;
					while (current->info < firstOutOfOrder->info)
					{
						trailCurrent = current;
						current = current->link;
					}

					if (current != firstOutOfOrder)
					{						
						lastInOrder->link = firstOutOfOrder->link;
						firstOutOfOrder->link = current;
						trailCurrent->link = firstOutOfOrder;
					}
					else
						lastInOrder = lastInOrder->link;

				}
			}
}

template<class elemType>
void orderedArrayListType<elemType>::quickSort()
{
	recQuickSort(0, length -1);
}

template<class elemType>
void orderedArrayListType<elemType>::recQuickSort(int first, int last)
{
	int pivotLocation;

	if (first < last)
	{
		pivotLocation = partition(first, last);
		recQuickSort(first, pivotLocation - 1);
		recQuickSort(pivotLocation + 1, last);
	}
}

template<class elemType>
int orderedArrayListType<elemType>::partition(int first, int last)
{
	elemType pivot;

	int index, smallIndex;

	swap(first, (first + last) / 2);

	pivot = list[first];
	smallIndex = first;

	for (index = first + 1; index <= last; index++)
		if (list[index] < pivot)
		{			
			smallIndex++;
			swap(smallIndex, index);
		}

	swap(first, smallIndex);

	return smallIndex;
}

template<class elemType>
void orderedLinkedListType<elemType>::mergeSort()
{
	recMergeSort(first);
}

template<class elemType>
void orderedLinkedListType<elemType>::divideList
						(nodeType<elemType>* first1, 
						nodeType<elemType>* &first2)
{
	nodeType<elemType>* middle;
	nodeType<elemType>* current;


	if (first1 == NULL)   //list is empty
		first2 = NULL;
	else
		if (first1->link == NULL)	//list has only one node
			first2 = NULL;
		else
		{
			middle = first1;
			current = first1->link;
			if (current != NULL)  	//list has more that two nodes
				current = current->link;

			while (current != NULL)
			{
				middle = middle->link;
				current = current->link;
				if (current != NULL)
					current = current->link;
			} //end while

			first2 = middle->link;  //first2 points to the first 
 					   //node of the second sublist
			middle->link = NULL;    //set the link of the last node 
    					   //of the first sublist to NULL
		} //end else
} //end divide

template<class elemType>
nodeType<elemType>* orderedLinkedListType<elemType>::mergeList 
  	           (nodeType<elemType>* first1, nodeType<elemType>* first2)
{
	nodeType<elemType> *lastSmall; //pointer to the last node of 
  					    //the merged list
	nodeType<elemType> *newHead;   //pointer to the merged list

	if (first1 == NULL)   //the first sublist is empty
		return first2;
	else
		if( first2 == NULL)   //the second sublist is empty
			return first1;
		else
		{
			if (first1->info < first2->info) //compare the first nodes
			{
				newHead = first1;  
				first1 = first1->link;
				lastSmall = newHead;
			}
			else
			{
				newHead = first2;
				first2 = first2->link;
				lastSmall = newHead;
			}
	
			while (first1 != NULL && first2 != NULL)
			{
				if (first1->info < first2->info)
				{
					lastSmall->link = first1;
					lastSmall = lastSmall->link;
					first1 = first1->link;
				}
				else
				{
					lastSmall->link = first2;
					lastSmall = lastSmall->link;
					first2 = first2->link;
				}
			} //end while

			if (first1 == NULL)  	  //first sublist is exhausted first
				lastSmall->link = first2;
			else			      //second sublist is exhausted first
				lastSmall->link = first1;

			return newHead;
		}	
}//end mergeList


template<class elemType>
void orderedLinkedListType<elemType>::recMergeSort
  						     (nodeType<elemType>* &head)
{
	nodeType<elemType> *otherHead;

	if (head != NULL)  //if the list is not empty
	   if (head->link != NULL)  //if the list has more than one node
	   {
	       divideList(head, otherHead);
	       recMergeSort(head);
		   recMergeSort(otherHead);
		   head = mergeList(head, otherHead);
	   }
} //end recMergeSort