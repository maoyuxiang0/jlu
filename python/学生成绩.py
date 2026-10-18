import numpy as np

# 三个学生，四门课成绩
s= np.array([
    [78, 85, 92, 66],
    [88, 79, 95, 70],
    [60, 91, 83, 77],
])
print(
s.shape,
s.ndim,
s.sum(axis=1),
(s.sum(axis=0)/3).round(1),
s.max(),
s.argmax(),
np.unravel_index(s.argmax(),s.shape),
np.random.seed(123),
np.random.randint(0,100,(2,3)),
s.dot([0.2,0.2,0.3,0.3])
)
