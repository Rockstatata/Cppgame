typedef struct Button_State{
	bool is_down;
	bool is_changed;
};

enum button{
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_W,
	BUTTON_S,
	BUTTON_LEFT,
	BUTTON_RIGHT,
	BUTTON_ENTER,
	BUTTON_ESC,
	BUTTON_COUNT
};

typedef struct Input{
	Button_State buttons[BUTTON_COUNT]; 
};