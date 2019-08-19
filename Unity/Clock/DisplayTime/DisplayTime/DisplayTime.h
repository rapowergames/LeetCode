#ifndef DISPLAYCLOCKTIME
#define DISPLAYCLOCKTIME


class displayClockTime
{
public:
	void DisplayTime(int secondsAfterMindnight);
private:
	void DsiplayHourHand(int degrees);
	void DisplayMinuteHand(int degreees);
};

#endif // !DISPLAYCLOCKTIME