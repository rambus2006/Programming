
int main(void) {
	// Image = ����ü
	Image img, copyImg = 0;

	system("cls");
	char imgPath[] = "frog.pbm";
	img = readPBMImage(imgPath);
	DrawImage(img);
	imageRelease(img);

	return 0;
}
int main(void) {
	Image img, copyImg = 0; // copyImg ���� �߰� �� �ʱ�ȭ.

	system("cls");
	char imgPath[] = "frog.pbm";
	img = readPBMImage(imgPath);

	// Copy & Edit PBM Image.
	writeImage("frogCopy.pbm", img);
	char copyFileName[] = "frogCopy.pbm";
	copyImg = readPBMImage(copyFileName);
	DrawImage(copyImg);
	imageRelease(copyImg);

	return 0;
}