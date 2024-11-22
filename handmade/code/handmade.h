#if !defined(HANDMADE_H)

// Services that the platform layer provides to the game

// Services that the game provides to the platform layer

// Three thing = timing, controller/keyboard input, bitmap to use, sound buffer to use
struct game_offscreen_buffer
{
	void *Memory;
	int Width;
	int Height;
	int Pitch;
	int BytesPerPixel = 4;
};

void GameUpdateAndRender(game_offscreen_buffer *Buffer, int BlueeOffset, int GreenOffset);

#define HANDMADE_H
#endif
