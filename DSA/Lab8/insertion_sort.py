import os
import sys

def insertionSort(a):
	for i in range(1,len(a)):
		j=i-1
		temp=a[i]
		while (a[j] > temp) and  (j>=0):
			a[j+1]=a[j]
			j=j-1
		a[j+1]=temp

arr = raw_input().split()
arr = [int(x) for x in arr]

insertionSort(arr)

print(arr)
	

