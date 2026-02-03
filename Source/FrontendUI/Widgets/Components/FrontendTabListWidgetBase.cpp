// Fill out your copyright notice in the Description page of Project Settings.


#include "FrontendUI/Widgets/Components/FrontendTabListWidgetBase.h"

#include "FrontendCommonButtonBase.h"
#include "Editor/WidgetCompilerLog.h"

#if WITH_EDITOR	
void UFrontendTabListWidgetBase::ValidateCompiledDefaults(IWidgetCompilerLog& CompileLog) const
{
	Super::ValidateCompiledDefaults(CompileLog);

	if (!TabButtonEntryWidgetClass)
	{
		CompileLog.Error(FText::FromString(
			TEXT("The variable TabButtonEntryWidgetClass has no valid entry specified. ") +
			GetClass()->GetName() + 
			TEXT(" needs a valid entry widget class to function properly")
		));
	}
}
#endif