//���е�c���Գ���Ҫ����main��������;c���Թ涨main�����ǳ�������,��ʾִ�е���㡣
//��/*...*����ע�ͷ�
//printf()������һ���⺯������������ַ���������̨���⺯����ʹ�ñ�������ͷ�ļ���
//stdio.h��һ����׼�������ͷ�ļ� #include��������ͷ�ļ�
//return 0 �ɱ�ʾִ�гɹ�
//��׼�ĺ���д��
#include <stdio.h>
#include <stddef.h>
//int are [9] = {1,2,3,4,5,6,7,8,9};//������ C ������һ�����ڴ洢���ͬ�������ݵļ��ϡ������Կ�����һ���̶���С�������ڴ���������ͨ�����������ʺͲ������е�Ԫ�ء�
//int daying()//��������
//{
//	int i=0;
//	while (i < 9)
//	{
//		printf("%d ", are[i]);//�������Ԫ��
//		i++;
//	}
//  printf("%d\n",sizeof(are)/sizeof(0));//���ֽڴ�С����ĳһ��Ԫ���ֽڴ�С���õ�����Ԫ�ظ���
//}//��������
/*��������������� daying() �ĵ���ʱ��û�п����ú����Ķ��壬���ܻᵼ��δ�������Ϊ�����Խ�����������ڵ���֮ǰ��Ҳ������main����ǰ�ٴ���������������ò�Ҫ�ڳ������ظ�������������Ϊ�����ᵼ�´������ࡣ*/

//int main()
//{
	//printf("Hello Zejun\n");//�ַ�����ֵ����������˫����""�У����ַ����������ڵ�����''��;�ر�ģ��ո�Ҳ���ַ�
	//�ַ����Ľ�����־�ǿ��ַ�'\0'*1������ռ���ڴ�ռ䣬��һ���������ַ�����ĩβ�������ر�����
	//��������
	//printf("%zu\n", sizeof(char)); //zu��ʾ���siozef�ķ���ֵ;char���ַ�������
	//printf("%zu\n", sizeof(int));//
	//printf("%zu\n", sizeof(short));
	//printf("%zu\n", sizeof(float));
	//printf("%zu\n", sizeof(double));
	//printf("%zu\n", sizeof(long));
	//printf("%zu\n", sizeof(long long));
	//daying(); //���ú���
	//system("pause"); pause������ʾ�ý�����ֱͣ���źų���
	/*return 0;
}*/
//sizeof()�������ڼ���������������͵��ֽ�������strlen()�������ڼ����ַ����ĳ��ȡ�
//system()��������ϵͳ�����������Windowsϵͳ��

/*�������Ͱ���
char�ַ�������
int���������͡��ַ�������Ҳ������
short������������
float������������
double˫���ȸ�����������
long��������������
long long�����ĳ�����������*/

/*1. ת���ַ�������ӡ�ַ���Ϊ���⺬����ַ�����\n��ʾ���з���\t��ʾ�Ʊ�����\b��ʾ�˸����\r��ʾ�س����ȡ����Ҫ��ӡ�����ķ�б���ַ�������Ҫ��������б�ܱ�ʾ����\\��ʾһ����б�ܡ����⣬ת���ַ�����һ���ַ�����\t�ĳ���Ϊ1��*/

//int main()
//{
//	float a = 7 / 2.0;//�������˶������������Ϊ��������Ҫ��.0����ʾ������
//	printf("%.2f\n", a);//������λС��
//	int b = 10 % 3;//ȡģ�����������˶�����������
//	printf("%d\n", b);
//	return 0;
//}

//�����
//int main()//�����������+��-��*��/��%���븳ֵ�������=��+=��-=��*=��/=��%=��
//{ 
	//int a = 0;//��ʼ��
	//a = 10;//��ֵ
	//a += 10;//a = a + 10;
	//a -= 5;//a = a - 5;�Դ�����
	//int b = 0;
	//b = a++;//�ȸ�ֵ��������
	//printf("%d\n", a);
	//������Ϊb=10��a=15��a--ͬ��
	//b = ++a;//�����㣬�ٸ�ֵ
	//printf("%d\n", b);
	//printf("%d\n", a);
	//������Ϊb=16��a=16��--aͬ��
	//int c = (int) 3.14;//ǿ������ת��
	//printf("%d\n", c);//������Ϊ3
//}

//��ϵ���������==��!=��<��>��<=��>=
//�߼����������&&���룩��||���򣩡�!���ǣ�
//��Ŀ���������++����������--���Լ�����+�����ţ���-�����ţ���*��ָ�룩��&��ȡ��ַ����sizeof��ȡ�ֽ�����
//���������Ҳ��Ϊ��Ŀ�����������������ʽ ?  : ����������������ʽ��ֵ�����٣�����������ʽ��ֵ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;//��a��b��˳�������ʽ������
	printf("%d\n", c);
	//���ű���ʽ�������������ʽ�ö��Ÿ������ص��Ǵ����Ҽ��㣬���������һ������ʽ��ֵ��
	int d = (c = a + b, b = c + a, b + c);
	printf("%d\n", d);
}