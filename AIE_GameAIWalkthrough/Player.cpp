#include"Player.h"
#include"KeyBoardBehaviour.h"


//PART 6 UPTOOOOO



Player::Player()
{
	m_kbBehaviour = new KeyboardBehaviour();
	//m_seekBehaviour = new SeekBehaviour();
	//m_seekBehaviour->OnArrive([this](){
	//     SetBehaviour(m_kbBehavoiur);
	// }


	SetBehaviour(m_kbBehaviour);
}


Player::~Player()
{
	SetBehaviour(nullptr);

	//delete m_seekBehaviour;
	delete m_kbBehaviour;
}

void Player::Update(float deltaTime)
{

	if (IsMouseButtonPressed(0))
	{
		//SetBehaviour(m_seekBehaviour);
	}

	GameObject::Update(deltaTime);
}

void Player::Draw()
{
	GameObject::Draw();
}