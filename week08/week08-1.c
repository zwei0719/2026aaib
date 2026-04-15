// week08-1 好玩的程式設計 氣球(圖片)
// Ctrl-N 新視窗
size(500,500);
PImage img; // 圖片宣告
img = loadImage("balloon.png");
image(img, 0, 0, 96, 132);
image(img, 96, 0, 96*2, 132*2);
