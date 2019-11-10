int main() {
	//Temporary variables:
	std::string tempFName;
	std::string tempLName;
	int tempAge;
	std::string tempAffiliations;

	//Gets the number of columns of the file:
	std::ifstream inFile; //make an output file stream object
	inFile.open(file.c_str()); //Opens the file
	inFile >> columns;

	//Creates a new array of type DriversLicenseRecord and size of the number of columns in the text file:
	m_arr = new Cliente[columns];

	//Sets each word of a line with a position in the 1D array.
	for (int i = 0; i < columns; i++)
	{
		inFile >> tempFName;
		m_arr[i].setFirstName(tempFName);
		inFile >> tempLName;
		m_arr[i].setLastName(tempLName);
		inFile >> tempAge;
		m_arr[i].setAge(tempAge);
		inFile >> tempAffiliations;
		m_arr[i].setAffiliations(tempAffiliations);
	}

	inFile.close();

}