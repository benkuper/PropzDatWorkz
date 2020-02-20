# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=23" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCE_PUSH_NOTIFICATIONS_ACTIVITY=\"com/roli/juce/JuceActivity\"" "-DJUCE_ANDROID_GL_ES_VERSION_3_0=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.2" "-DJUCE_APP_VERSION_HEX=0x10002")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "D:/Softwares/JUCE/modules"
    "D:/Documents/Perso/Projects/JUCE Modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
    include_directories( AFTER
        "../../../Source"
    )

ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
    include_directories( AFTER
        "../../../Source"
    )

ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Resources/patterns/air.png"
    "../../../Resources/patterns/alicorn.png"
    "../../../Resources/patterns/blue_blazer.png"
    "../../../Resources/patterns/bold.png"
    "../../../Resources/patterns/bolder.png"
    "../../../Resources/patterns/candy.png"
    "../../../Resources/patterns/daybreak.png"
    "../../../Resources/patterns/earth.png"
    "../../../Resources/patterns/fire.png"
    "../../../Resources/patterns/fireball.png"
    "../../../Resources/patterns/flamebow.png"
    "../../../Resources/patterns/freedom.png"
    "../../../Resources/patterns/froth.png"
    "../../../Resources/patterns/jammin.png"
    "../../../Resources/patterns/lantern.png"
    "../../../Resources/patterns/liquid_sugar.png"
    "../../../Resources/patterns/love.png"
    "../../../Resources/patterns/microdots.png"
    "../../../Resources/patterns/petals.png"
    "../../../Resources/patterns/pulse.png"
    "../../../Resources/patterns/rainbow.png"
    "../../../Resources/patterns/rainbow_dash.png"
    "../../../Resources/patterns/rainbow_drops.png"
    "../../../Resources/patterns/solar_flare.png"
    "../../../Resources/patterns/spirit.png"
    "../../../Resources/patterns/strobe.png"
    "../../../Resources/patterns/sunset.png"
    "../../../Resources/patterns/unicorns.png"
    "../../../Resources/patterns/water.png"
    "../../../Resources/patterns/watermelon.png"
    "../../../Resources/default.pdwlayout"
    "../../../Source/Serial/lib/cobs/cobs.cpp"
    "../../../Source/Serial/lib/cobs/cobs.h"
    "../../../Source/Serial/lib/serial/impl/list_ports/list_ports_linux.cc"
    "../../../Source/Serial/lib/serial/impl/list_ports/list_ports_osx.cc"
    "../../../Source/Serial/lib/serial/impl/list_ports/list_ports_win.cc"
    "../../../Source/Serial/lib/serial/impl/unix.cc"
    "../../../Source/Serial/lib/serial/impl/win.cc"
    "../../../Source/Serial/lib/serial/serial.cc"
    "../../../Source/Serial/SerialDevice.cpp"
    "../../../Source/Serial/SerialDevice.h"
    "../../../Source/Serial/SerialDeviceParameter.cpp"
    "../../../Source/Serial/SerialDeviceParameter.h"
    "../../../Source/Serial/SerialManager.cpp"
    "../../../Source/Serial/SerialManager.h"
    "../../../Source/Audio/ui/AudioManagerHardwareEditor.cpp"
    "../../../Source/Audio/ui/AudioManagerHardwareEditor.h"
    "../../../Source/Audio/AudioManager.cpp"
    "../../../Source/Audio/AudioManager.h"
    "../../../Source/Output/OSC/OSCOutput.cpp"
    "../../../Source/Output/OSC/OSCOutput.h"
    "../../../Source/Output/Serial/SerialOutput.cpp"
    "../../../Source/Output/Serial/SerialOutput.h"
    "../../../Source/Output/ui/OutputManagerUI.cpp"
    "../../../Source/Output/ui/OutputManagerUI.h"
    "../../../Source/Output/Output.cpp"
    "../../../Source/Output/Output.h"
    "../../../Source/Output/OutputManager.cpp"
    "../../../Source/Output/OutputManager.h"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternClipManagerUI.cpp"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternClipManagerUI.h"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternClipUI.cpp"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternClipUI.h"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternLayerPanel.cpp"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternLayerPanel.h"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternLayerTimeline.cpp"
    "../../../Source/Timeline/layers/PatternLayer/ui/PatternLayerTimeline.h"
    "../../../Source/Timeline/layers/PatternLayer/PatternClip.cpp"
    "../../../Source/Timeline/layers/PatternLayer/PatternClip.h"
    "../../../Source/Timeline/layers/PatternLayer/PatternClipManager.cpp"
    "../../../Source/Timeline/layers/PatternLayer/PatternClipManager.h"
    "../../../Source/Timeline/layers/PatternLayer/PatternLayer.cpp"
    "../../../Source/Timeline/layers/PatternLayer/PatternLayer.h"
    "../../../Source/Timeline/PatternSequence.cpp"
    "../../../Source/Timeline/PatternSequence.h"
    "../../../Source/Timeline/TimelineEditor.cpp"
    "../../../Source/Timeline/TimelineEditor.h"
    "../../../Source/Pattern/ui/PatternManagerGridUI.cpp"
    "../../../Source/Pattern/ui/PatternManagerGridUI.h"
    "../../../Source/Pattern/ui/PatternUI.cpp"
    "../../../Source/Pattern/ui/PatternUI.h"
    "../../../Source/Pattern/Pattern.cpp"
    "../../../Source/Pattern/Pattern.h"
    "../../../Source/Pattern/PatternLibrary.cpp"
    "../../../Source/Pattern/PatternLibrary.h"
    "../../../Source/PDWEngine.cpp"
    "../../../Source/PDWEngine.h"
    "../../../Source/MainComponent.h"
    "../../../Source/MainComponent.cpp"
    "../../../Source/Main.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../../../../Softwares/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/CrashHandler.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/CrashHandler.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicApplication.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicApplication.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicMainComponent.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicMainComponent.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicMainComponentCommands.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/ui/EasingUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/ui/EasingUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/Bezier.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/Easing.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/Easing.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ui/ParameterAutomationEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ui/ParameterAutomationEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ParameterAutomation.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ParameterAutomation.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/ui/AutomationRecorderEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/ui/AutomationRecorderEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/AutomationRecorder.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/AutomationRecorder.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/Automation2DUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/Automation2DUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKey2DUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKey2DUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKeyUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKeyUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationMultiKeyTransformer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationMultiKeyTransformer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/Automation.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/Automation.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/AutomationKey.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/AutomationKey.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentManagerViewUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentManagerViewUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/Comment.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/Comment.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/CommentManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/CommentManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardCCItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardCCItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardControllableItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardControllableItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardTriggerItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardTriggerItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardCCItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardCCItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardControllableItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardControllableItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardTriggerItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardTriggerItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/ui/DashboardParameterItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/ui/DashboardParameterItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/DashboardParameterItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/DashboardParameterItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColorManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColorManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BetterStepper.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BetterStepper.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolImageToggleUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolImageToggleUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolToggleUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolToggleUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ColorParameterUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ColorParameterUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/DoubleSliderUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/DoubleSliderUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/EnumParameterUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/EnumParameterUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatParameterLabelUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatParameterLabelUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatSliderUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatSliderUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatStepperUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatStepperUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntParameterLabelUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntParameterLabelUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntSliderUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntSliderUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntStepperUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntStepperUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/StringParameterUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/StringParameterUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TargetParameterUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TargetParameterUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TripleSliderUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TripleSliderUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/BoolParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/BoolParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ColorParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ColorParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/EnumParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/EnumParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FileParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FileParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatRangeParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatRangeParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntRangeParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntRangeParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Parameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Parameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point2DParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point2DParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point3DParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point3DParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/StringParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/StringParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/TargetParameter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/TargetParameter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/GenericControllableContainerEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/GenericControllableContainerEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerBlinkUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerBlinkUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerButtonUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerButtonUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerImageUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerImageUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Controllable.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Controllable.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableContainer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableContainer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableContainerListener.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableFactory.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableFactory.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableHelpers.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableHelpers.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableUtil.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Trigger.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Trigger.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardGroupItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardGroupItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerView.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerView.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/Dashboard.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/Dashboard.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardGroupItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardGroupItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemFactory.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemFactory.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemProvider.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/Engine.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/Engine.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/EngineFileDocument.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/EngineListener.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpBox.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpBox.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpPanel.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpPanel.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/HMAC_SHA1.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/HMAC_SHA1.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/SHA1.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/SHA1.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/DebugHelpers.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/NetworkHelpers.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/OSCHelpers.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/QueuedNotifier.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/RegexFunctions.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/StringUtil.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/StringUtil.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/WakeOnLan.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/ui/DashboardInspectableItemUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/ui/DashboardInspectableItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/DashboardInspectableItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/DashboardInspectableItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableContentComponent.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableContentComponent.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableSelector.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableSelector.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/Inspector.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/Inspector.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/Inspectable.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/Inspectable.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableContent.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableContent.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableSelectionManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableSelectionManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/ui/CustomLoggerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/ui/CustomLoggerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/CustomLogger.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/CustomLogger.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemMinimalUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerShapeShifterUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerViewMiniPane.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerViewUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/GenericControllableItemEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/GenericControllableItemEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/GenericManagerEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseItemListener.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseManagerListener.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/Factory.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/outliner/Outliner.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/outliner/Outliner.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ui/ProgressWindow.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ui/ProgressWindow.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ProgressNotifier.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ProgressNotifier.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/remotecontrol/OSCRemoteControl.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/remotecontrol/OSCRemoteControl.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/AppConfig.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/BinaryData.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/BinaryData.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_basics.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_devices.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_formats.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_processors.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_core.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_core.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_cryptography.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_data_structures.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_events.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_events.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_graphics.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_graphics.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_basics.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_extra.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_opengl.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_opengl.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_video.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_video.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/JuceHeader.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/ReadMe.txt"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/BinaryData.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/BinaryData.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ui/ScriptEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ui/ScriptEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ExpressionListener.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/Script.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/Script.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptExpression.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptExpression.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptTarget.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptTarget.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptUtil.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptUtil.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ui/GlobalSettingsEditor.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ui/GlobalSettingsEditor.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/GlobalSettings.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/GlobalSettings.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ProjectSettings.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ProjectSettings.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/GapGrabber.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/GapGrabber.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContainer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContainer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContent.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContent.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterFactory.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterFactory.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanel.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanel.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelHeader.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelHeader.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelTab.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelTab.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterWindow.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterWindow.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/AssetManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/AssetManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/Grabber.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/Grabber.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/LookAndFeelOO.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/LookAndFeelOO.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/Style.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/undo/UndoMaster.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/undo/UndoMaster.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/updater/AppUpdater.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/updater/AppUpdater.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningReporterPanel.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningReporterPanel.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningTargetUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningTargetUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningReporter.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningReporter.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningTarget.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningTarget.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/juce_organicui.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/juce_organicui2.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/README.md"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/juce_organicui.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCAddress.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCAddress.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCArgument.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCArgument.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCBundle.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCBundle.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCMessage.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCMessage.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCReceiver.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCReceiver.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCSender.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCSender.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTypes.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTypes.h"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/juce_osc.cpp"
    "../../../../../../../../../Softwares/JUCE/modules/juce_osc/juce_osc.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/AppConfig.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/BinaryData.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/BinaryData.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_basics.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_devices.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_formats.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_processors.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_core.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_core.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_cryptography.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_data_structures.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_events.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_events.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_graphics.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_graphics.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_basics.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_extra.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_opengl.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_opengl.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_video.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_video.mm"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/JuceHeader.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/ReadMe.txt"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/BinaryData.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/BinaryData.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Common/TimedLayerItem.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Common/TimedLayerItem.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCue.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCue.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCueManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCueManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerPanel.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerPanel.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerTimeline.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerTimeline.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClip.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClip.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClipManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClipManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlock.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlock.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlockManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlockManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerMultiTransformer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerMultiTransformer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerPanel.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerPanel.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerTimeline.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerTimeline.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTrigger.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTrigger.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTriggerManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTriggerManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TriggerLayer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TriggerLayer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanel.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanel.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanelManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanelManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimeline.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimeline.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimelineManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimelineManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayer.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayer.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayerManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayerManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceEditorView.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceEditorView.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineHeader.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineHeader.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineNavigationUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineNavigationUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineSeeker.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineSeeker.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTransportUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTransportUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Sequence.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Sequence.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/SequenceManagerUI.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/SequenceManagerUI.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/TimeMachineView.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/TimeMachineView.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/SequenceManager.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/SequenceManager.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/juce_timeline.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/README.md"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/TimelineAppCommands.cpp"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/TimelineAppCommands.h"
    "../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/juce_timeline.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/BinaryData.cpp"
    "../../../JuceLibraryCode/BinaryData.h"
    "../../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../../JuceLibraryCode/include_juce_organicui.cpp"
    "../../../JuceLibraryCode/include_juce_organicui2.cpp"
    "../../../JuceLibraryCode/include_juce_osc.cpp"
    "../../../JuceLibraryCode/include_juce_timeline.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Resources/patterns/air.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/alicorn.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/blue_blazer.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/bold.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/bolder.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/candy.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/daybreak.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/earth.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/fire.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/fireball.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/flamebow.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/freedom.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/froth.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/jammin.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/lantern.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/liquid_sugar.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/love.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/microdots.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/petals.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/pulse.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/rainbow.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/rainbow_dash.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/rainbow_drops.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/solar_flare.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/spirit.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/strobe.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/sunset.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/unicorns.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/water.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/patterns/watermelon.png" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Resources/default.pdwlayout" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Serial/lib/cobs/cobs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Serial/SerialDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Serial/SerialDeviceParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Serial/SerialManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Audio/ui/AudioManagerHardwareEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Audio/AudioManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Output/OSC/OSCOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Output/Serial/SerialOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Output/ui/OutputManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Output/Output.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Output/OutputManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/ui/PatternClipManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/ui/PatternClipUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/ui/PatternLayerPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/ui/PatternLayerTimeline.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/PatternClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/PatternClipManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/layers/PatternLayer/PatternLayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/PatternSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Timeline/TimelineEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Pattern/ui/PatternManagerGridUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Pattern/ui/PatternUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Pattern/Pattern.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Pattern/PatternLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/PDWEngine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioProcessLoadMeasurer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_ADSR.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/utilities/juce_SmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiDevices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/baseiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/classfactoryhelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fbuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fobject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstreamer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/fstring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/source/updatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/include/flock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/thread/source/flock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/base/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/conststringtable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/coreiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/falignpush.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fplatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fstrdefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ftypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/funknown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/futils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/fvariant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ibstream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/icloneable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipersistent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ipluginbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/istringresult.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/iupdatehandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/smartpointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/typesizecheck.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/base/ustring.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/gui/iplugviewcontentscalesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstattributes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstaudioprocessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstautomationstate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstchannelcontextinfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstcontextmenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstevents.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsthostapplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstinterappaudio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidicontrollers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstmidilearn.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstnoteexpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstparameterchanges.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstphysicalui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstpluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstplugview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprefetchablesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstprocesscontext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstrepresentation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivsttestplugprovider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/ivstunits.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstpshpack4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vstspeaker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/vst/vsttypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/pluginterfaces/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/memorystream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/common/pluginview.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/hostclasses.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/hosting/pluginterfacesupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstbus.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstcomponentbase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vsteditcontroller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstinitiids.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstparameters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/source/vst/vstpresetfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/public.sdk/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/LICENSE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/VST3_SDK/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_AU_Shared.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameterGroup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/utilities/juce_RangedAudioParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/CrashHandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/CrashHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicMainComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicMainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/app/OrganicMainComponentCommands.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/ui/EasingUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/ui/EasingUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/Bezier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/Easing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/easing/Easing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ui/ParameterAutomationEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ui/ParameterAutomationEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ParameterAutomation.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/parameter/ParameterAutomation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/ui/AutomationRecorderEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/ui/AutomationRecorderEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/AutomationRecorder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/recorder/AutomationRecorder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/Automation2DUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/Automation2DUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKey2DUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKey2DUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKeyUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationKeyUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationMultiKeyTransformer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationMultiKeyTransformer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/ui/AutomationUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/Automation.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/Automation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/AutomationKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/automation/AutomationKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentManagerViewUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentManagerViewUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/ui/CommentUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/Comment.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/Comment.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/CommentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/comment/CommentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardCCItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardCCItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardControllableItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardControllableItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardTriggerItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/ui/DashboardTriggerItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardCCItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardCCItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardControllableItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardControllableItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardTriggerItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/dashboard/DashboardTriggerItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/ui/DashboardParameterItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/ui/DashboardParameterItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/DashboardParameterItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/dashboard/DashboardParameterItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/ui/GradientColorUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColorManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/gradient/GradientColorManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BetterStepper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BetterStepper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolImageToggleUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolImageToggleUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolToggleUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/BoolToggleUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ColorParameterUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ColorParameterUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/DoubleSliderUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/DoubleSliderUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/EnumParameterUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/EnumParameterUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatParameterLabelUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatParameterLabelUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatSliderUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatSliderUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatStepperUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/FloatStepperUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntParameterLabelUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntParameterLabelUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntSliderUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntSliderUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntStepperUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/IntStepperUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/ParameterUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/StringParameterUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/StringParameterUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TargetParameterUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TargetParameterUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TripleSliderUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ui/TripleSliderUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/BoolParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/BoolParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ColorParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/ColorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/EnumParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/EnumParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FileParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FileParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatRangeParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/FloatRangeParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntRangeParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/IntRangeParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Parameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Parameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point2DParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point2DParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point3DParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/Point3DParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/StringParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/StringParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/TargetParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/parameter/TargetParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/ControllableUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/GenericControllableContainerEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/GenericControllableContainerEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerBlinkUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerBlinkUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerButtonUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerButtonUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerImageUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerImageUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ui/TriggerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Controllable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Controllable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableContainerListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableFactory.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/ControllableUtil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Trigger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/controllable/Trigger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardGroupItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardGroupItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardManagerView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/ui/DashboardUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/Dashboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/Dashboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardGroupItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardGroupItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemFactory.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardItemProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/dashboard/DashboardManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/Engine.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/Engine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/EngineFileDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/engine/EngineListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/help/HelpPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/HMAC_SHA1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/HMAC_SHA1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/SHA1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/crypto/hmac/SHA1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/DebugHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/NetworkHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/OSCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/QueuedNotifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/RegexFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/StringUtil.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/StringUtil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/helpers/WakeOnLan.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/ui/DashboardInspectableItemUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/ui/DashboardInspectableItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/DashboardInspectableItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/dashboard/DashboardInspectableItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableContentComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableContentComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/InspectableSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/Inspector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/ui/Inspector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/Inspectable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/Inspectable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableContent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableContent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableSelectionManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/inspectable/InspectableSelectionManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/ui/CustomLoggerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/ui/CustomLoggerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/CustomLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/logger/CustomLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemMinimalUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseItemUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerShapeShifterUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerViewMiniPane.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/BaseManagerViewUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/GenericControllableItemEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/GenericControllableItemEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/ui/GenericManagerEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseItemListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/BaseManagerListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/Factory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/manager/GenericControllableManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/outliner/Outliner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/outliner/Outliner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ui/ProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ui/ProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ProgressNotifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/progress/ProgressNotifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/remotecontrol/OSCRemoteControl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/remotecontrol/OSCRemoteControl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/BinaryData.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/include_juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/organicui_resources/JuceLibraryCode/ReadMe.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/BinaryData.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/resources/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ui/ScriptEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ui/ScriptEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ExpressionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/Script.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/Script.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptExpression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptExpression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptUtil.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/script/ScriptUtil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ui/GlobalSettingsEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ui/GlobalSettingsEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/GlobalSettings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/GlobalSettings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ProjectSettings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/settings/ProjectSettings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/GapGrabber.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/GapGrabber.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterContent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterFactory.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelHeader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelTab.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterPanelTab.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/shapeshifter/ShapeShifterWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/AssetManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/AssetManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/Grabber.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/Grabber.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/LookAndFeelOO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/LookAndFeelOO.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/ui/Style.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/undo/UndoMaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/undo/UndoMaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/updater/AppUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/updater/AppUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningReporterPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningReporterPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningTargetUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/ui/WarningTargetUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningReporter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningReporter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/warning/WarningTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/juce_organicui.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/juce_organicui2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_organicui/juce_organicui.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCArgument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCArgument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCBundle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCBundle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCReceiver.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCReceiver.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCSender.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCSender.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTimeTag.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/osc/juce_OSCTypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/juce_osc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../Softwares/JUCE/modules/juce_osc/juce_osc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/BinaryData.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/include_juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/timeline_resources/JuceLibraryCode/ReadMe.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/BinaryData.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/resources/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Common/TimedLayerItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Common/TimedLayerItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/ui/TimeCueUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCueManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Cue/TimeCueManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerClipUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerTimeline.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/ui/AudioLayerTimeline.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClip.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClip.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClipManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/audio/AudioLayerClipManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/ui/LayerBlockUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlockManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Block/LayerBlockManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerMultiTransformer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerMultiTransformer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TimeTriggerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerTimeline.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/ui/TriggerLayerTimeline.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTrigger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTrigger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTriggerManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TimeTriggerManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TriggerLayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/layers/Trigger/TriggerLayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanelManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerPanelManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimeline.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimeline.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimelineManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/ui/SequenceLayerTimelineManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayerManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Layer/SequenceLayerManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceEditorView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceEditorView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineHeader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineNavigationUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineNavigationUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineSeeker.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTimelineSeeker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTransportUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceTransportUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/ui/SequenceUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Sequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/Sequence/Sequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/SequenceManagerUI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/SequenceManagerUI.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/TimeMachineView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/ui/TimeMachineView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/SequenceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/timeline/SequenceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/juce_timeline.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/TimelineAppCommands.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/TimelineAppCommands.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../Perso/Projects/JUCE Modules/juce_timeline/juce_timeline.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv3 "GLESv3")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv3}
    ${egl}
    "cpufeatures"
)
