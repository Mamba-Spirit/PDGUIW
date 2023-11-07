##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=contact_management
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/axel/Documents/ozanam/project/PDGUIW/contact_management
ProjectPath            :=/home/axel/Documents/ozanam/project/PDGUIW/contact_management/contact_management
IntermediateDirectory  :=../build-$(ConfigurationName)/contact_management
OutDir                 :=../build-$(ConfigurationName)/contact_management
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=
Date                   :=10/08/23
CodeLitePath           :=/home/axel/.codelite
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
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            := -no-pie $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)IHM 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/contact_management/Directory.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/contact_management/MyApp.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/contact_management/Contact.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/contact_management/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/contact_management"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/contact_management"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/contact_management/.d:
	@mkdir -p "../build-$(ConfigurationName)/contact_management"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(ObjectSuffix): EvtFramePrincipal.cpp ../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/ozanam/project/PDGUIW/contact_management/contact_management/EvtFramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(DependSuffix): EvtFramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(DependSuffix) -MM EvtFramePrincipal.cpp

../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(PreprocessSuffix): EvtFramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/contact_management/EvtFramePrincipal.cpp$(PreprocessSuffix) EvtFramePrincipal.cpp

../build-$(ConfigurationName)/contact_management/Directory.cpp$(ObjectSuffix): Directory.cpp ../build-$(ConfigurationName)/contact_management/Directory.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/ozanam/project/PDGUIW/contact_management/contact_management/Directory.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Directory.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/contact_management/Directory.cpp$(DependSuffix): Directory.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/contact_management/Directory.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/contact_management/Directory.cpp$(DependSuffix) -MM Directory.cpp

../build-$(ConfigurationName)/contact_management/Directory.cpp$(PreprocessSuffix): Directory.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/contact_management/Directory.cpp$(PreprocessSuffix) Directory.cpp

../build-$(ConfigurationName)/contact_management/MyApp.cpp$(ObjectSuffix): MyApp.cpp ../build-$(ConfigurationName)/contact_management/MyApp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/ozanam/project/PDGUIW/contact_management/contact_management/MyApp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/contact_management/MyApp.cpp$(DependSuffix): MyApp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/contact_management/MyApp.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/contact_management/MyApp.cpp$(DependSuffix) -MM MyApp.cpp

../build-$(ConfigurationName)/contact_management/MyApp.cpp$(PreprocessSuffix): MyApp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/contact_management/MyApp.cpp$(PreprocessSuffix) MyApp.cpp

../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(ObjectSuffix): FramePrincipal.cpp ../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/ozanam/project/PDGUIW/contact_management/contact_management/FramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(DependSuffix): FramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(DependSuffix) -MM FramePrincipal.cpp

../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(PreprocessSuffix): FramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/contact_management/FramePrincipal.cpp$(PreprocessSuffix) FramePrincipal.cpp

../build-$(ConfigurationName)/contact_management/Contact.cpp$(ObjectSuffix): Contact.cpp ../build-$(ConfigurationName)/contact_management/Contact.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/axel/Documents/ozanam/project/PDGUIW/contact_management/contact_management/Contact.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Contact.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/contact_management/Contact.cpp$(DependSuffix): Contact.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/contact_management/Contact.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/contact_management/Contact.cpp$(DependSuffix) -MM Contact.cpp

../build-$(ConfigurationName)/contact_management/Contact.cpp$(PreprocessSuffix): Contact.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/contact_management/Contact.cpp$(PreprocessSuffix) Contact.cpp


-include ../build-$(ConfigurationName)/contact_management//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


