// week12-1
// File -> Preferences -> View

PImage img; /// 你的圖片變數

void setup() {
    size(300, 300);
    img = loadImage("gopher.png"); /// 載入圖片
}

float a = 0;

void draw() {
    a += 0.03;
    background(128);

    /// float x = 100 + 50*cos(a), y = 100 + 50*sin(a); /// 順時針畫
    float x = 100 + 0*cos(a), y = 250 + 50*sin(a); /// 上下震動

    image(img, x, y, 100, 100);

    /// image(img, 0, 0, 100, 100); /// 顯示圖片
    /// image 有 5 個參數（圖片, x, y, 寬, 高）
}
