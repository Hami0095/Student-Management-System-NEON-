#pragma once

namespace NEON {

ref class Registration
{ 
	float _gpa, * _assignment, * _quiz, * _mid, _final;
public:
	Registration() {
		_gpa = 0;
		_assignment = nullptr;
		_quiz = nullptr;
		_mid = nullptr;
		_final = 0;
	}
	
	/*property float GPA {float getGpa() {return _gpa;} void setgpa(float a) {_gpa = a;} }
	property float FINAL{float getFinal() {return _final;} void setFinal(float a) {_final = a;}}
	property float* ASSIGNMENT {float getAssignment() {return _assignment;}	void setAssignment(float* a) {_assignment = a;}}
	property float* QUIZ {float getQuiz() {return _quiz;}void setQuiz(float* a) {_quiz = a;}} 
	property float* MIDS {float getMids() {return _mid;} void setMids(float* a) {_mid = a;}}
	*/




};

}