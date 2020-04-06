#pragma once

class IState
{
	virtual void UpdateState(float elapsedTime) {};
	virtual void Render() {};
	virtual void OnEnter() {};
	virtual void OnExit() {};
};

class CFSM
{
public: 
	CFSM();
	~CFSM();

public:
	State m_state;

	void UpdateState();
	void OnEnter();
	void OnExit();
	void ChangeState(State _state);

};

