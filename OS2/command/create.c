#include "type.h"
#include "stdio.h"
#include "string.h"
int main(int argc, char* argv[])
{
	//��ʼ������
	char* filename;
	char* bufw;
	int i;
	//��ȡ�ļ������ļ�����
	for (i = 1; i < argc; i++)
	{
		//��ȡ�ļ���
		if (i == 1)
		{
			filename = argv[i];
		}
		//��ȡ�ļ�����
		if (i == 2)
		{
			bufw = argv[i];
		}
	}
	//��ʼ�����ļ�
	int fd;
	fd = open(filename, O_CREAT | O_RDWR);
	//assert(fd != -1);
	if (fd != -1)
	{
		int n;
		n = write(fd, bufw, strlen(bufw));
		printf("File:%s created.\n", filename);
	}
	else {
		printf("Fail to create\n");
		return 0;
	}
	//�ر�
	close(fd);

}