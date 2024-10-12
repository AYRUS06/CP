# show image in red band , blue band , green band
import sklearn
from skimage import io
from skimage import color
from skimage.transform import rescale, resize, downscale_local_mean
import matplotlib.pyplot as plt
img = io.imread("d:\dip\.venv\imgs\images.jpg")
# resized_image = resize(img, (1028, 1028))
# rescaled_image = rescale(img, 1.0 / 4.0, anti_aliasing=True)
# rescaled_image1 = rescale(img, 1.0 / 4.0, anti_aliasing=False)
# rescaled_image2 = rescale(img, 1.0 / 4.0, anti_aliasing=True, multichannel=True);
# subplots = [resized_image, rescaled_image, rescaled_image1, rescaled_image2]
# # titles = ['resized_image', 'rescaled_image', 'rescaled_image1', 'rescaled_image2']
# for i in range(4):
#     io.imshow(subplots[i])
#     # io.title(titles[i])
#     io.show()
a = img[:, :, 0]
b = img[:, :, 1]
c = img[:, :, 2]
plt.subplot(2, 2, 1)
plt.imshow(a, 'Reds')
plt.title('red band')
plt.subplot(2, 2, 2)
plt.imshow(b)
plt.title('greens')
plt.subplot(2, 2, 3)
plt.imshow(c)
plt.title('blues')
plt.show()



# rgb2gray = color.rgb2gray(img)
# io.imshow(rgb2gray)
# io.show()
# gray2rgb = color.gray2rgb(rgb2gray)
# io.imshow(gray2rgb)
# io.show()
# io.imshow(img)
# io.show()
