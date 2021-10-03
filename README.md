# Classification_of_defective_products

# 데이터 수집

## extract_video.py 
- 경로 설정
```
input = 'C:/Users/charl/Desktop/test/3.mp4'
```
- 이미지 추출해서 경로에 저장하기
```
cv2.imwrite(f'C:/Users/charl/green/green_normal/{frame_idx}.jpg', frameClone)
```