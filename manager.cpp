#include"manager.h"

//���캯��
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}

//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDepName()
		<< "\t��λְ������ϰ彻�������񣬲����·������Ա��" << endl;
}

//��ȡ��λ����
string Manager::getDepName()
{
	return string("����");
}