// CREW MEMBERS

#include <iostream>

class CrewMember
{
	std::string m_name;
	std::string m_role;
	int m_yearsOfService;

public:
	CrewMember(std::string name, std::string role, int yearsOfService);

	//getter
	std::string getName() const { return m_name; }
	std::string getRole() const { return m_role; }
	int getYearsOfService() const { return m_yearsOfService; }


	//setters acuerdate de ponerlo cons el parametro para afimrar q no se modificara
	void setName(const std::string& name) { m_name =  name; }
	void setRole(const std::string& role) { m_role = role; }
	void setYearsOfService(int yearsOfService) { m_yearsOfService = yearsOfService; }

};

CrewMember::CrewMember(std::string name, std::string role, int yearsOfService)
{
	m_name = name;
	m_role = role;
	m_yearsOfService = yearsOfService;
}

void iniciarcrewmember(CrewMember* member, std:: string , int edad, std::string)
{
	member->setName("ji");
}

void print( CrewMember **member ,int saize )
{

}

void promoteCrewMember(CrewMember* member, const std::string& newRole) {
	member->setRole(newRole);
}



int main()
{
	int crewMemvers = 3;
	CrewMember**crew = new CrewMember* [crewMemvers];

	crew[0] = new CrewMember("John", "Captain", 10);
	crew[1] = new CrewMember("Sarah", "Engineer", 5);
	crew[2] = new CrewMember("Alex", "Pilot", 3);


	//preguntart manish, que en la prefgunta modificar crewmemver porq no pasar mejor solo un punteor??

	promoteCrewMember(crew[0], "perro");

}