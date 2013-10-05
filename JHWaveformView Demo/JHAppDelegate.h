//
//  JHAppDelegate.h
//  JHWaveformView Demo
//
//  Created by Jamie Hardt on 10/3/12.
//  Copyright (c) 2012 Jamie Hardt. All rights reserved.
//

// Copyright (c) 2012, Jamie Hardt
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OR
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import <Cocoa/Cocoa.h>
#import "JHWaveform.h"
#import <CoreMedia/CoreMedia.h>

enum waveformTestSignals {
    sine = 1001,
    square = 1002
    };

@interface JHAppDelegate : NSObject <NSApplicationDelegate> {
    JHAudioPreviewView *_waveformView;
    JHWaterfallView *_waterfallView;

    NSUInteger _numberOfWaveformTestSamples;
    NSUInteger _waveformTestSignal;
    
    AVPlayer *_player;
    
    NSTextField *_audioViewStatus, *_locationField, *_lengthField;
}

@property (assign) IBOutlet NSWindow *window;
@property (retain) IBOutlet JHMonoWaveformView *waveformView;
@property (retain) IBOutlet JHWaterfallView *waterfallView;

@property (retain) IBOutlet NSTextField *locationField;
@property (retain) IBOutlet NSTextField *lengthField;

-(IBAction)setWaveformTestSignal:(id)sender;
-(IBAction)setNumberOfWaveformTestSamples:(id)sender;

-(IBAction)openTestAudioFile:(id)sender;
-(IBAction)playTestFile:(id)sender;
-(IBAction)pauseTestFile:(id)sender;

-(IBAction)rtzTestFile:(id)sender;
-(IBAction)speedPlayTestFile:(id)sender;

@end
