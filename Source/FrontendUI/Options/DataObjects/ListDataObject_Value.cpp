// Fill out your copyright notice in the Description page of Project Settings.


#include "FrontendUI/Options/DataObjects/ListDataObject_Value.h"

#include "FrontendUI/Options/OptionsDataInteractionHelper.h"

void UListDataObject_Value::SetDataDynamicGetter(const TSharedPtr<FOptionsDataInteractionHelper>& InDynamicGetter)
{
	DataDynamicGetter = InDynamicGetter;
}

void UListDataObject_Value::SetDataDynamicSetter(const TSharedPtr<FOptionsDataInteractionHelper>& InDynamicSetter)
{
	DataDynamicSetter = InDynamicSetter;
}