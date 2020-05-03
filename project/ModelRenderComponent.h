#pragma once
#include "../../project/component.h"
#include <GL/glew.h>

#include "Model.h"
#include "RenderComponent.h"

class ModelRenderComponent : public RenderComponent
{
	labhelper::Model* model = nullptr;

public:
	
	void render() override;


	labhelper::Model* getModel() const;

	void update(float _dt) override;
	ModelRenderComponent(GameObject* _go, GLuint _shaderProgram, labhelper::Model* _model, glm::mat4 _modelMatrix);

};

