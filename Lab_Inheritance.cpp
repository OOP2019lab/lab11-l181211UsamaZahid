#include "Faculty.h"
#include "Student.h"

int main()
{
	Student s("Ted", "Thompson", 22, (float)3.91);
	Faculty f("Richard", "Karp", 45, 2, 420);

	s.printStudent();
	f.printFaculty();
	system("pause");
}