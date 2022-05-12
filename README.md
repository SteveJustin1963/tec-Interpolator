# tec-Interpolator
tec1 Interpolator using hw and sw

Online calculator for linear interpolation and extrapolation. Given two (x, y) pairs and an additional x or y, compute the missing value.
![image](https://user-images.githubusercontent.com/58069246/168182197-1254fbee-2049-4f59-b704-993eca477475.png)

- y	=	linear interpolation value
- x	=	independent variable
- x_1, y_1	=	values of the function at one point
- x_2, y_2	=	values of the function at another point

ipxy.c


```
Enter the value of x1, y1, x2, y2: 1 2 3 4
Enter the value of x: 2
The value of y is: 3.000000
```

ipxy.forth83


```
1 2 3 4 2 linear-interpolation .
3
```
