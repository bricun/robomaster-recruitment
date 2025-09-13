# 任务5 - 目标识别入门

## 任务一：识别敌方机器人颜色
### 实现思路
1. 使用OpenCV读取图像
2. 转换BGR到HSV色彩空间
3. 设定红色HSV阈值范围
4. 生成二值化掩码并显示

### 运行命令
```bash
python3 color_detection.py test_red_armor.jpg
