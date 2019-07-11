# -*- coding: utf-8 -*-
import numpy as np
import matplotlib.pyplot as plt
import cv2
from mpl_toolkits.mplot3d import Axes3D

fig = plt.figure("3D_surface")
ax = Axes3D(fig)
X = np.arange(0, 912, 1)
Y = np.arange(0, 1140, 1)
X, Y = np.meshgrid(X, Y)

img = cv2.imread("./cos_pictures/" + "cos_wave" + "_Period_" + "1" + "_initial_phase_" + "0" + ".bmp")
Z = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

ax.plot_surface(X, Y, Z, rstride=1, cstride=1, cmap='rainbow')

ax.set_zlabel('Z')  # 坐标轴
ax.set_ylabel('Y')
ax.set_xlabel('X')
plt.draw()


plt.figure("3D_scatter")
ax = plt.subplot(projection='3d')
ax.scatter(X, Y, Z, c='r')  # 绘制数据点,颜色是红色

ax.set_zlabel('Z')  # 坐标轴
ax.set_ylabel('Y')
ax.set_xlabel('X')
plt.draw()

plt.show()
