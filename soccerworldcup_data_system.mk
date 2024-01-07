##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=soccerworldcup_data_system
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/berkayozcan/workspaces/soccerworldcup_data_system
ProjectPath            :=/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Berkay Ozcan
Date                   :=07/01/24
CodeLitePath           :=/home/berkayozcan/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="soccerworldcup_data_system.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/squads.c$(ObjectSuffix) $(IntermediateDirectory)/goals.c$(ObjectSuffix) $(IntermediateDirectory)/match.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c
	$(CC) $(SourceSwitch) "/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/squads.c$(ObjectSuffix): squads.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/squads.c$(ObjectSuffix) -MF$(IntermediateDirectory)/squads.c$(DependSuffix) -MM squads.c
	$(CC) $(SourceSwitch) "/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system/squads.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/squads.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/squads.c$(PreprocessSuffix): squads.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/squads.c$(PreprocessSuffix) squads.c

$(IntermediateDirectory)/goals.c$(ObjectSuffix): goals.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/goals.c$(ObjectSuffix) -MF$(IntermediateDirectory)/goals.c$(DependSuffix) -MM goals.c
	$(CC) $(SourceSwitch) "/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system/goals.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/goals.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/goals.c$(PreprocessSuffix): goals.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/goals.c$(PreprocessSuffix) goals.c

$(IntermediateDirectory)/match.c$(ObjectSuffix): match.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/match.c$(ObjectSuffix) -MF$(IntermediateDirectory)/match.c$(DependSuffix) -MM match.c
	$(CC) $(SourceSwitch) "/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system/match.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/match.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/match.c$(PreprocessSuffix): match.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/match.c$(PreprocessSuffix) match.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


