#pragma once

#include"raymath.h"

class Behaviour;

class GameObject
{
public:

	GameObject();
	virtual ~GameObject();

	virtual void Update(float deltaTime);
	virtual void Draw();

	void ApplyForce(const Vector2& force);

	//getters
	const Vector2& GetPostion() const;
	const Vector2& GetVelocity() const;
	const float& GetFrication() const;

	Behaviour* GetBehaviour();

	//setters
	void SetPostion(const Vector2& pos);
	void SetVelocity(const Vector2& vel);
	void SetFriction(const float& frication);

	void SetBehaviour(Behaviour* behaviour);

protected:

	Vector2 m_postion = {0.0f,0.0f};
	Vector2 m_velocity = {0.0f,0.0f};
	Vector2 m_acceleration = { 0.0f,0.0f };
	float m_friction = 0.0f;

	Behaviour* m_behaviour = nullptr;

private:
};