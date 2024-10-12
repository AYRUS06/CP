# # display image using opencv
# import cv2
# import matplotlib.pyplot as plt



# def fast_brightness(input_image, brightness):
    
#     img = input_image.copy()
#     cv2.convertScaleAbs(img, img, 1, brightness)
#     return img


# input_image = cv2.imread('D:\dip\.venv\imgs\img.jpg')



# # cv2.imshow('output.jpg', fast_brightness(img, -200))
# imgi=fast_brightness(input_image, -50);
# plt.subplot(6, 2, 1)
# plt.imshow(imgi)
# plt.title('low brightness')
# plt.subplot(6, 2, 2)
# plt.imshow(input_image)
# plt.title('original image')
# input_image1 = cv2.imread('D:\dip\.venv\imgs\img1.jpg')
# img1=fast_brightness(input_image1, -50);
# plt.subplot(6, 2, 3)
# plt.imshow(img1)

# plt.subplot(6, 2, 4)
# plt.imshow(input_image1)

# input_image2 = cv2.imread('D:\dip\.venv\imgs\img2.jpg')
# img2=fast_brightness(input_image2, -50);
# plt.subplot(6, 2, 5)
# plt.imshow(img2)

# plt.subplot(6, 2, 6)
# plt.imshow(input_image2)

# input_image3 = cv2.imread('D:\dip\.venv\imgs\img3.jpg')
# img3 = fast_brightness(input_image3, -50)
# plt.subplot(6, 2, 7)
# plt.imshow(img3)

# plt.subplot(6, 2, 8)
# plt.imshow(input_image3)

# input_image4 = cv2.imread('D:\dip\.venv\imgs\img4.jpg')
# img4 = fast_brightness(input_image4, -50)
# plt.subplot(6, 2, 9)
# plt.imshow(img4)

# plt.subplot(6, 2, 10)
# plt.imshow(input_image4)

# input_image5 = cv2.imread('D:\dip\.venv\imgs\img1.jpg')
# img5 = fast_brightness(input_image5, -50)
# plt.subplot(6, 2, 11)
# plt.imshow(img5)

# plt.subplot(6, 2, 12)
# plt.imshow(input_image5)

# plt.show()


# cv2.waitKey(0)
# # import cv2
# # import numpy as np
# # from matplotlib import pyplot as plt
# # img = cv2.imread("D:\dip\.venv\imgs\images.jpg")
# # cv2.imshow('image', img)
# # cv2.waitKey(0)
import numpy as np
import cv2
import matplotlib.pyplot as plt
img = cv2.imread("image.jpg")
img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
plt.imshow(img, cmap='gray')
hist = [0]*256
for px in img.flatten():
    hist[px] += 1

plt.figure(figsize=(50, 10))
plt.bar(range(0, 256), hist)
img2 = (img + 120) % 256
plt.imshow(img2, cmap='gray')
plt.imshow(img, cmap='gray')
hist2 = [0]*256
for px in img2.flatten():
    hist2[int(px)] += 1

plt.figure(figsize=(50, 10))
plt.bar(range(0, 256), hist2)
# histogram stretching

rmin = 0
rmax = 255
while hist[rmin] == 0:
    rmin += 1
while hist[rmax] == 0:
    rmax -= 1

smin = 0
smax = 255

a = (smax - smin)/(rmax - rmin)

hist3 = [0]*256
for i in range(0, 256):
    x = round(a*(i - rmin) + smin)
    hist3[x] += hist[i]

plt.figure(figsize=(50, 10))
plt.bar(range(0, 256), hist3)
# generating gaussian noise

gaussian_noise = np.zeros(img.shape, dtype=np.uint8)
print(gaussian_noise)
plt.imshow(gaussian_noise, cmap='gray')
cv2.randn(gaussian_noise, 128, 20)
gaussian_noise = (gaussian_noise*0.5).astype('uint8')
gaussian_img = cv2.add(img, gaussian_noise)
plt.imshow(gaussian_noise, cmap='gray')
plt.imshow(gaussian_img, cmap='gray')
plt.subplot(1, 2, 1)
plt.imshow(gaussian_noise, cmap='gray')
plt.subplot(1, 2, 2)
plt.imshow(gaussian_img, cmap='gray')
