#!/bin/bash
declare -A c
declare -A a
declare -A b

echo "enter first matrix rows"
read m1
echo "enter first matrix columns"
read n1
echo "enter second matrix rows"
read m2
echo "enter second matrix rows"
read n2
if [ $m1 -eq $m2  -a $n2 -eq $n1 ]
then
echo "enter elements of first matrix"
  for((i=0;i<m1;i++))
  do
    for((j=0;j<n1;j++))
    do
      read k
      a[$i,$j]=$k
    done
  done

  echo "enter elements of second  matrix"
    for((i=0;i<m2;i++))
    do
      for((j=0;j<n2;j++))
      do
        read k
        b[$i,$j]=$k
      done
    done

    for((i=0;i<m1;i++))
    do
      for((j=0;j<n1;j++))
      do
        echo -e "${a[$i,$j]} \c"
      done
      echo -e "\n "
    done


      for((i=0;i<m1;i++))
      do
        for((j=0;j<n1;j++))
        do
          c[$i,$j]=`expr ${a[$i,$j]} + ${b[$i,$j]}`
        done
      done
else
  echo "matrix multiplication is not possible"
fi

echo "the added matrix is"

  for((i=0;i<m1;i++))
  do
    for((j=0;j<n1;j++))
    do
      echo -e "${c[$i,$j]} \c"
    done
    echo -e "\n "
  done
