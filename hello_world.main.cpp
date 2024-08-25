#include "hello_imgui/hello_imgui.h"
#include "audio.h"

int main(int , char *[])
{
	auto guiFunction = []()
	{
		ImGui::Text("Hello, ");                    // Display a simple label
		
		static bool show = true;
		ImGui::ShowDemoWindow(&show);

		HelloImGui::ImageFromAsset("world.jpg");   // Display a static image
		if (ImGui::Button("sayonara!"))                 // Display a button
		{
			// and immediately handle its action if it is clicked!
			HelloImGui::GetRunnerParams()->appShallExit = true;
		}
	};
	
	// Initialize SDL2 Audio only
	SDL_Init(SDL_INIT_AUDIO);

	// Initialize Simple-SDL2-Audio
	initAudio();

	playSound("asound.wav", SDL_MIX_MAXVOLUME / 2);

	// Let play for 1 second
	SDL_Delay(1000);

	// End Simple-SDL2-Audio
	endAudio();

	HelloImGui::Run(guiFunction, "Hello, globe", true);
	return 0;
}
