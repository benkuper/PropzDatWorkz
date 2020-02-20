# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# build with "V=1" for verbose builds
ifeq ($(V), 1)
V_AT =
else
V_AT = @
endif

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

JUCE_ARCH_LABEL := $(shell uname -m)

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := 
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.2 -DJUCE_APP_VERSION_HEX=0x10002 $(shell pkg-config --cflags alsa x11 xinerama xext freetype2 webkit2gtk-4.0 gtk+-x11-3.0 libcurl) -pthread -I../../JuceLibraryCode -I$(HOME)/JUCE/modules -I$(HOME)/modules -I../../External/serial/include -I../../Source $(CPPFLAGS)
  JUCE_CPPFLAGS_APP := -DJucePlugin_Build_VST=0 -DJucePlugin_Build_VST3=0 -DJucePlugin_Build_AU=0 -DJucePlugin_Build_AUv3=0 -DJucePlugin_Build_RTAS=0 -DJucePlugin_Build_AAX=0 -DJucePlugin_Build_Standalone=0 -DJucePlugin_Build_Unity=0
  JUCE_TARGET_APP := PropzDatWorkz

  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++14 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) $(shell pkg-config --libs alsa x11 xinerama xext freetype2 webkit2gtk-4.0 gtk+-x11-3.0 libcurl) -Wl,-rpath,"lib" -Wl,--as-needed -lrt -ldl -lpthread -lGL $(LDFLAGS)

  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := 
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.2 -DJUCE_APP_VERSION_HEX=0x10002 $(shell pkg-config --cflags alsa x11 xinerama xext freetype2 webkit2gtk-4.0 gtk+-x11-3.0 libcurl) -pthread -I../../JuceLibraryCode -I$(HOME)/JUCE/modules -I$(HOME)/modules -I../../External/serial/include -I../../Source $(CPPFLAGS)
  JUCE_CPPFLAGS_APP := -DJucePlugin_Build_VST=0 -DJucePlugin_Build_VST3=0 -DJucePlugin_Build_AU=0 -DJucePlugin_Build_AUv3=0 -DJucePlugin_Build_RTAS=0 -DJucePlugin_Build_AAX=0 -DJucePlugin_Build_Standalone=0 -DJucePlugin_Build_Unity=0
  JUCE_TARGET_APP := PropzDatWorkz

  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -O3 $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++14 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) $(shell pkg-config --libs alsa x11 xinerama xext freetype2 webkit2gtk-4.0 gtk+-x11-3.0 libcurl) -fvisibility=hidden -Wl,-rpath,"lib" -Wl,--as-needed -lrt -ldl -lpthread -lGL $(LDFLAGS)

  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

OBJECTS_APP := \
  $(JUCE_OBJDIR)/cobs_a8714273.o \
  $(JUCE_OBJDIR)/list_ports_linux_d216222f.o \
  $(JUCE_OBJDIR)/list_ports_osx_569e314f.o \
  $(JUCE_OBJDIR)/list_ports_win_63b37f87.o \
  $(JUCE_OBJDIR)/unix_87053b01.o \
  $(JUCE_OBJDIR)/win_835e6bd7.o \
  $(JUCE_OBJDIR)/serial_22996570.o \
  $(JUCE_OBJDIR)/SerialDevice_240c59a6.o \
  $(JUCE_OBJDIR)/SerialDeviceParameter_d8e9a1ed.o \
  $(JUCE_OBJDIR)/SerialManager_be7563a7.o \
  $(JUCE_OBJDIR)/AudioManagerHardwareEditor_ce81cbaf.o \
  $(JUCE_OBJDIR)/AudioManager_d6082e39.o \
  $(JUCE_OBJDIR)/OSCOutput_c9b8148b.o \
  $(JUCE_OBJDIR)/SerialOutput_cf62becb.o \
  $(JUCE_OBJDIR)/OutputManagerUI_5b25114.o \
  $(JUCE_OBJDIR)/Output_f1cea9d0.o \
  $(JUCE_OBJDIR)/OutputManager_f3c22047.o \
  $(JUCE_OBJDIR)/PatternClipManagerUI_dd40d236.o \
  $(JUCE_OBJDIR)/PatternClipUI_dc60d229.o \
  $(JUCE_OBJDIR)/PatternLayerPanel_a3651ff8.o \
  $(JUCE_OBJDIR)/PatternLayerTimeline_89c36cd7.o \
  $(JUCE_OBJDIR)/PatternClip_32525dfa.o \
  $(JUCE_OBJDIR)/PatternClipManager_85d48dd.o \
  $(JUCE_OBJDIR)/PatternLayer_16f8b631.o \
  $(JUCE_OBJDIR)/PatternSequence_e6ec768c.o \
  $(JUCE_OBJDIR)/TimelineEditor_4cddf71d.o \
  $(JUCE_OBJDIR)/PatternManagerGridUI_76ea5ed4.o \
  $(JUCE_OBJDIR)/PatternUI_1f3654f1.o \
  $(JUCE_OBJDIR)/Pattern_a9a79fd2.o \
  $(JUCE_OBJDIR)/PatternLibrary_431ca213.o \
  $(JUCE_OBJDIR)/PDWEngine_54d60006.o \
  $(JUCE_OBJDIR)/MainComponent_a6ffb4a5.o \
  $(JUCE_OBJDIR)/Main_90ebc5c2.o \
  $(JUCE_OBJDIR)/BinaryData_ce4232d4.o \
  $(JUCE_OBJDIR)/include_juce_audio_basics_8a4e984a.o \
  $(JUCE_OBJDIR)/include_juce_audio_devices_63111d02.o \
  $(JUCE_OBJDIR)/include_juce_audio_formats_15f82001.o \
  $(JUCE_OBJDIR)/include_juce_audio_processors_10c03666.o \
  $(JUCE_OBJDIR)/include_juce_audio_utils_9f9fb2d6.o \
  $(JUCE_OBJDIR)/include_juce_core_f26d17db.o \
  $(JUCE_OBJDIR)/include_juce_cryptography_8cb807a8.o \
  $(JUCE_OBJDIR)/include_juce_data_structures_7471b1e3.o \
  $(JUCE_OBJDIR)/include_juce_events_fd7d695.o \
  $(JUCE_OBJDIR)/include_juce_graphics_f817e147.o \
  $(JUCE_OBJDIR)/include_juce_gui_basics_e3f79785.o \
  $(JUCE_OBJDIR)/include_juce_gui_extra_6dee1c1a.o \
  $(JUCE_OBJDIR)/include_juce_opengl_a8a032b.o \
  $(JUCE_OBJDIR)/include_juce_organicui_2c36794d.o \
  $(JUCE_OBJDIR)/include_juce_organicui2_5ab8c64f.o \
  $(JUCE_OBJDIR)/include_juce_osc_f3df604d.o \
  $(JUCE_OBJDIR)/include_juce_timeline_e6183ffd.o \

.PHONY: clean all strip

all : $(JUCE_OUTDIR)/$(JUCE_TARGET_APP)

$(JUCE_OUTDIR)/$(JUCE_TARGET_APP) : $(OBJECTS_APP) $(RESOURCES)
	@command -v pkg-config >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@pkg-config --print-errors alsa x11 xinerama xext freetype2 webkit2gtk-4.0 gtk+-x11-3.0 libcurl
	@echo Linking "PropzDatWorkz - App"
	-$(V_AT)mkdir -p $(JUCE_BINDIR)
	-$(V_AT)mkdir -p $(JUCE_LIBDIR)
	-$(V_AT)mkdir -p $(JUCE_OUTDIR)
	$(V_AT)$(CXX) -o $(JUCE_OUTDIR)/$(JUCE_TARGET_APP) $(OBJECTS_APP) $(JUCE_LDFLAGS) $(JUCE_LDFLAGS_APP) $(RESOURCES) $(TARGET_ARCH)

$(JUCE_OBJDIR)/cobs_a8714273.o: ../../Source/Serial/lib/cobs/cobs.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling cobs.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/list_ports_linux_d216222f.o: ../../Source/Serial/lib/serial/impl/list_ports/list_ports_linux.cc
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling list_ports_linux.cc"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/list_ports_osx_569e314f.o: ../../Source/Serial/lib/serial/impl/list_ports/list_ports_osx.cc
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling list_ports_osx.cc"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/list_ports_win_63b37f87.o: ../../Source/Serial/lib/serial/impl/list_ports/list_ports_win.cc
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling list_ports_win.cc"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/unix_87053b01.o: ../../Source/Serial/lib/serial/impl/unix.cc
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling unix.cc"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/win_835e6bd7.o: ../../Source/Serial/lib/serial/impl/win.cc
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling win.cc"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/serial_22996570.o: ../../Source/Serial/lib/serial/serial.cc
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling serial.cc"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/SerialDevice_240c59a6.o: ../../Source/Serial/SerialDevice.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling SerialDevice.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/SerialDeviceParameter_d8e9a1ed.o: ../../Source/Serial/SerialDeviceParameter.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling SerialDeviceParameter.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/SerialManager_be7563a7.o: ../../Source/Serial/SerialManager.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling SerialManager.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioManagerHardwareEditor_ce81cbaf.o: ../../Source/Audio/ui/AudioManagerHardwareEditor.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AudioManagerHardwareEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioManager_d6082e39.o: ../../Source/Audio/AudioManager.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AudioManager.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/OSCOutput_c9b8148b.o: ../../Source/Output/OSC/OSCOutput.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling OSCOutput.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/SerialOutput_cf62becb.o: ../../Source/Output/Serial/SerialOutput.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling SerialOutput.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/OutputManagerUI_5b25114.o: ../../Source/Output/ui/OutputManagerUI.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling OutputManagerUI.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Output_f1cea9d0.o: ../../Source/Output/Output.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Output.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/OutputManager_f3c22047.o: ../../Source/Output/OutputManager.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling OutputManager.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternClipManagerUI_dd40d236.o: ../../Source/Timeline/layers/PatternLayer/ui/PatternClipManagerUI.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternClipManagerUI.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternClipUI_dc60d229.o: ../../Source/Timeline/layers/PatternLayer/ui/PatternClipUI.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternClipUI.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternLayerPanel_a3651ff8.o: ../../Source/Timeline/layers/PatternLayer/ui/PatternLayerPanel.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternLayerPanel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternLayerTimeline_89c36cd7.o: ../../Source/Timeline/layers/PatternLayer/ui/PatternLayerTimeline.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternLayerTimeline.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternClip_32525dfa.o: ../../Source/Timeline/layers/PatternLayer/PatternClip.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternClip.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternClipManager_85d48dd.o: ../../Source/Timeline/layers/PatternLayer/PatternClipManager.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternClipManager.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternLayer_16f8b631.o: ../../Source/Timeline/layers/PatternLayer/PatternLayer.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternLayer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternSequence_e6ec768c.o: ../../Source/Timeline/PatternSequence.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternSequence.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TimelineEditor_4cddf71d.o: ../../Source/Timeline/TimelineEditor.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TimelineEditor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternManagerGridUI_76ea5ed4.o: ../../Source/Pattern/ui/PatternManagerGridUI.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternManagerGridUI.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternUI_1f3654f1.o: ../../Source/Pattern/ui/PatternUI.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternUI.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Pattern_a9a79fd2.o: ../../Source/Pattern/Pattern.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Pattern.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PatternLibrary_431ca213.o: ../../Source/Pattern/PatternLibrary.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PatternLibrary.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PDWEngine_54d60006.o: ../../Source/PDWEngine.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PDWEngine.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainComponent_a6ffb4a5.o: ../../Source/MainComponent.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MainComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Main_90ebc5c2.o: ../../Source/Main.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Main.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BinaryData.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_basics_8a4e984a.o: ../../JuceLibraryCode/include_juce_audio_basics.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_audio_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_devices_63111d02.o: ../../JuceLibraryCode/include_juce_audio_devices.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_audio_devices.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_formats_15f82001.o: ../../JuceLibraryCode/include_juce_audio_formats.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_audio_formats.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_processors_10c03666.o: ../../JuceLibraryCode/include_juce_audio_processors.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_audio_processors.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_audio_utils_9f9fb2d6.o: ../../JuceLibraryCode/include_juce_audio_utils.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_audio_utils.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_core_f26d17db.o: ../../JuceLibraryCode/include_juce_core.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_core.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_cryptography_8cb807a8.o: ../../JuceLibraryCode/include_juce_cryptography.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_cryptography.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_data_structures_7471b1e3.o: ../../JuceLibraryCode/include_juce_data_structures.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_data_structures.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_events_fd7d695.o: ../../JuceLibraryCode/include_juce_events.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_events.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_graphics_f817e147.o: ../../JuceLibraryCode/include_juce_graphics.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_graphics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_gui_basics_e3f79785.o: ../../JuceLibraryCode/include_juce_gui_basics.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_gui_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_gui_extra_6dee1c1a.o: ../../JuceLibraryCode/include_juce_gui_extra.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_gui_extra.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_opengl_a8a032b.o: ../../JuceLibraryCode/include_juce_opengl.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_opengl.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_organicui_2c36794d.o: ../../JuceLibraryCode/include_juce_organicui.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_organicui.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_organicui2_5ab8c64f.o: ../../JuceLibraryCode/include_juce_organicui2.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_organicui2.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_osc_f3df604d.o: ../../JuceLibraryCode/include_juce_osc.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_osc.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

$(JUCE_OBJDIR)/include_juce_timeline_e6183ffd.o: ../../JuceLibraryCode/include_juce_timeline.cpp
	-$(V_AT)mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling include_juce_timeline.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) $(JUCE_CPPFLAGS_APP) $(JUCE_CFLAGS_APP) -o "$@" -c "$<"

clean:
	@echo Cleaning PropzDatWorkz
	$(V_AT)$(CLEANCMD)

strip:
	@echo Stripping PropzDatWorkz
	-$(V_AT)$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(TARGET)

-include $(OBJECTS_APP:%.o=%.d)
