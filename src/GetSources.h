/*
* The MIT License (MIT)
*
* Copyright (c) 2015 vmolsa <ville.molsa@gmail.com> (http://github.com/vmolsa)
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*/

#ifndef WEBRTC_GETSOURCES_H
#define WEBRTC_GETSOURCES_H

#include "Common.h"
#include "MediaConstraints.h"

namespace WebRTC {
  class GetSources {
   public:
    static void Init(v8::Handle<v8::Object> exports);

    static rtc::scoped_refptr<webrtc::AudioTrackInterface> GetAudioSource(const rtc::scoped_refptr<MediaConstraints> &constraints);
    static rtc::scoped_refptr<webrtc::AudioTrackInterface> GetAudioSource(const std::string id, const rtc::scoped_refptr<MediaConstraints> &constraints);

    static rtc::scoped_refptr<webrtc::VideoTrackInterface> GetVideoSource(const rtc::scoped_refptr<MediaConstraints> &constraints);
    static rtc::scoped_refptr<webrtc::VideoTrackInterface> GetVideoSource(const std::string id, const rtc::scoped_refptr<MediaConstraints> &constraints);
    static v8::Local<v8::Value> GetDevices();

   private:
    static void GetVideoSource2(const Nan::FunctionCallbackInfo<v8::Value> &info);
    static void GetDevices(const Nan::FunctionCallbackInfo<v8::Value> &info);
  };
}; 

#endif
