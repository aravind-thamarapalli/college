import numpy as np
from PIL import Image

arr=np.random.randint(0,100,size=(40,30))
img = Image.fromarray(arr)
img.save('output_image.png')


img=Image.open('output_image.png')
arr2=np.array(img)
print(arr2)