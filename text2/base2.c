#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ַ����ң��������������飬��������С˳�����У�
//int main()
//{
//	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	scanf("%d", &i);
//	printf("������Ҫ���ҵ�ֵ");
//	int sz = sizeof(arr)/sizeof(arr[0]);//��ȡ�����Ԫ�ظ���
//	int left = 0;//��߽�
//	int right = sz - 1;//�ұ߽�;��Ϊ�����±��0��ʼ�������Ǵ�1��ʼ���������ұ߽�Ϊsz-1
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//�����м�λ��;�������while�����ڣ���Ϊÿ�ε�����left��right��ֵ��仯��mid��ֵҲ��Ҫ����ʵʱ����
//		int mid = left + (right - left) / 2;//�������
//		if (arr[mid] == i)
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
//			break;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;//���midС��i��˵��i���Ұ벿�֣�������߽�Ϊmid+1����߽�ǰ����
//		}
//		else
//		{
//			right = mid - 1;//���mid����i��˵��i����벿�֣������ұ߽�Ϊmid-1���ұ߽���ˣ�
//		}
//		mid = (left + right) / 2;
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�");
//	}
//	return 0;
//}

// �Ľ��棬��������ʾ�û��Ƿ�������ҵĹ���
//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    char choice;
//
//    do {
//        int i = 0;
//        printf("������Ҫ���ҵ�ֵ: ");
//        scanf("%d", &i);
//
//        int sz = sizeof(arr) / sizeof(arr[0]); // ��ȡ�����Ԫ�ظ���
//        int left = 0; // ��߽�
//        int right = sz - 1; // �ұ߽�
//        int found = 0; // ����Ƿ��ҵ�
//
//        while (left <= right) {
//            int mid = left + (right - left) / 2; // �����м�λ��
//            if (arr[mid] == i) {
//                printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//                found = 1; // �ҵ�ʱ���ñ��
//                break; // �ҵ����˳�ѭ��
//            }
//            else if (arr[mid] < i) {
//                left = mid + 1; // ������߽�
//            }
//            else {
//                right = mid - 1; // �����ұ߽�
//            }
//        }
//
//        if (!found) {
//            printf("û���ҵ�\n");
//        }
//
//        // ��ʾ�û��Ƿ��������
//        printf("�Ƿ��������? (y/n): ");
//        scanf(" %c", &choice); // ע��ǰ��Ŀո񣬱����ȡ����һ������Ļ��з�
//
//    } while (choice == 'y' || choice == 'Y'); // ��������
//
//    return 0;
//}

// ��ӡ�ַ���������
//#include <string.h>//for strlen()
//#include <stdlib.h>//for system()
//#include <windows.h>//for Sleep()
//int main()
//{
//	char arr1[12] = { "hello world" };
//	char arr2[12] = { "           " };//��ʼ��Ϊ�ո����ڴ洢��ǰ�����ַ����Ĳ�������
//	int left = 0; //leftָ���ַ����Ŀ�ͷ����һ���ַ���
//	int right = strlen(arr1) - 1;//rightָ���ַ����Ľ�β�����һ���ַ���
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//��arr1��leftλ�õ��ַ����Ƶ�arr2�Ķ�Ӧλ��
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��ͣ����ִ��1000���루1�룩��
//		system("cls");//����
//		left++;
//		right--;//����left��right��leftָ����һ���ַ���rightָ����һ���ַ�
//	}
//	return 0;
//}

//ģ���û���¼
//int main()
//{
//	int i = 0;
//	char password[10];
//	for (i = 1; i <= 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//strcmp
//		{
//			printf("������ȷ����ӭ����ϵͳ��\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	    if (3 == i)
//	    {
//		    printf("��δ������Ժ����ԣ�");
//	    }
//	}
//return 0;	
//}