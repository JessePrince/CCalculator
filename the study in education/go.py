import numpy as np
import matplotlib.pyplot as plt

def prof(array):
    array1 = array**2
    array2 = np.sum(array1,0)
    array3 = array2**0.5
    array4 = np.array([array3,array3,array3,array3,array3,array3,array3])
    array5 = np.true_divide(array,array4)
    return array5

def eva(array):
    maxray = np.array([])
    minray = np.array([])
    for i in array.T:
        maxray = np.append(maxray,np.max(i))
    maxray = np.array([maxray,maxray,maxray,maxray,maxray,maxray,maxray])
    array2 = array-maxray
    array3 = array2**2
    array4 = np.sum(array3,1)
    d_p = array4**0.5
    for i in array.T:
        minray = np.append(minray,np.min(i))
    minray = np.array([minray,minray,minray,minray,minray,minray,minray])
    array2 = array-minray
    array3 = array2**2
    array4 = np.sum(array3,1)
    d_n = array4**0.5
    ans = np.true_divide(d_n,(d_p+d_n))
    return ans*(1/np.sum(ans))

def average(array):
    cot = np.array([])
    temp = 0
    for i in range(4):
        temp +=array[i]
    temp /=4
    cot = np.append(cot,temp)
    temp = 0
    for i in range(4,7):
        temp += array[i]
    temp /=3
    cot = np.append(cot,temp)
    return cot
    
a = np.array([[460,707,968,0.81],
             [256,709,963,0.702],
             [35,677,526,0.577],
             [315,709,1021,0.533],
             [39,729,215,0.479],
             [248,699,1151,0.5813],
             [105,682,848,0.46]])
b = np.array([[368,699,1002,0.79],
              [336,703,981,0.792],
             [40,661,438,0.476],
             [155,699,671,0.532],
             [57,698,226,0.475],
             [248,709,1151,0.5813],
             [140,680,673,0.395]])
c = np.array([[276,691,933,0.76],
             [272,699,917,0.882],
             [45,655,329,0.4269],
             [168,689,670,0.531],
             [75,677,204,0.471],
             [248,719,1151,0.5813],
             [175,678,498,0.33]])
d = np.array([[184,683,865,0.73],
             [165,700,853,0.7],
             [50,649,221,0.3778],
             [115,679,803,0.495],
             [93,636,193,0.467],
             [248,729,1151,0.5813],
             [210,676,323,0.265]])
              
print ("2020年的得分矩阵是")
reta = eva(prof(a))
print (reta)
print ("2019年的得分矩阵是")
retb = eva(prof(b))
print (retb)
print ("2018年的得分矩阵是")
retc = eva(prof(c))
print (retc)
print ("2017年的得分矩阵是")
retd = eva(prof(d))
print (retd)
change = np.array([])
change = np.append(change,average(retd)[0]-average(retd)[1])
change = np.append(change,average(retc)[0]-average(retc)[1])
change = np.append(change,average(retb)[0]-average(retb)[1])
change = np.append(change,average(reta)[0]-average(reta)[1])
x_raw = np.array([2017,2018,2019,2020])
print ("每年的差距分数是")
print (change)
plt.figure()
plt.plot(x_raw, change)