#ifndef __MC_ACTIVITY__
#define __MC_ACTIVITY__

#define IMPOSSIBLE_INITITIVE 65000

enum class ActivityType {
	Momentary,
	Delayed
};

class Activity {
	int basicInitiativePointsNeeded; // ������� ���-�� ����� ����������, ��������� ��� ���������� �������� 
	int initiativePointsLeft; // ���������� �� ���������� �������� ���-�� ����� ����������
	ActivityType type;

public:
	void UseInitiativePoints(int points);
	virtual void PerformAction() const {}
};

// ���������� ��������
class None : public Activity {
	int BasicInitiativePointsNeeded = 0;
};

class Move : public Activity {
	int BasicInitiativePointsNeeded = 1;

};

class CreateCity : public Activity {
	int BasicInitiativePointsNeeded = 0;
};

class BuildRoad : public Activity {
	int BasicInitiativePointsNeeded = 5;
};

class BuildMine : public Activity {
	int BasicInitiativePointsNeeded = 10;
};

class Hold : public Activity {
	int BasicInitiativePointsNeeded = IMPOSSIBLE_INITITIVE;
};

#endif // __MC_ACTIVITY__
