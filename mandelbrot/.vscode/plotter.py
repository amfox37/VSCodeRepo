from numpy import loadtxt
import matplotlib.pyplot as plt

fractal = loadtxt("fractal_py.dat")
x_min, x_max, y_min, y_max = loadtxt("coord_py.dat")

plt.imshow(fractal, cmap=plt.cm.hot,
           extent=(x_min, x_max, y_min, y_max))
plt.title('Mandelbrot Set')
plt.xlabel('Re(z)')
plt.ylabel('Im(z)')
plt.savefig("mandelbrot_py.png")