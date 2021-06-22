#include"Application.h"
#include"raylib.h"

#include"GameObject.h"
#include"Player.h"
#include"KeyBoardBehaviour.h"

Application::Application(int windowWidth, int windowHeight, const char* WindowTitle) :
	m_windowWidth(windowWidth),
	m_windowHeight(windowHeight),
	m_windowTitle(WindowTitle)
{

}

Application::~Application()
{

}

void Application::Run()
{
    
    InitWindow(m_windowWidth, m_windowHeight, m_windowTitle);
    SetTargetFPS(60);

    Load();

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();
        Update(deltaTime);
        Draw();
    }
    Unload();

    CloseWindow();
}

void Application::Load() 
{
    m_player1 = new Player();
    m_player1->SetPostion({ m_windowWidth * 0.25f, m_windowHeight / 2.0f });
    m_player1->SetFriction(1.0f);
    

    /*m_player2 = new GameObject();
    m_player2->SetPostion({ m_windowWidth * 0.75f, m_windowHeight / 2.0f });
    m_player2->SetFriction(1.0f);
    m_player2->SetBehaviour(new KeyboardBehaviour(KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT, 100));*/
    
    //m_player->SetBehaviour(new SeekBehaviour());
    //m_player->SetBehaviour(new FleekBehaviour());
    
}
void Application::Unload()
{
    delete m_player1;
    m_player1 = nullptr;

    /*delete m_player2;
    m_player2 = nullptr;*/
}

void Application::Update(float deltaTime)
{
   
    //m_player->ApplyForce({10,0});

    m_player1->Update(deltaTime);

    //m_player2->Update(deltaTime);
}

void Application::Draw()
{
    BeginDrawing();
    ClearBackground(RAYWHITE);

    DrawText("Hello World", 10, 10, 16, GRAY);

    m_player1->Draw();

    //m_player2->Draw();

    EndDrawing();
}