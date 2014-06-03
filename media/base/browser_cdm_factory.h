// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_BASE_BROWSER_CDM_FACTORY_H_
#define MEDIA_BASE_BROWSER_CDM_FACTORY_H_

#include <string>

#include "base/memory/scoped_ptr.h"
#include "media/base/media_export.h"
#include "media/base/media_keys.h"

namespace media {

class BrowserCdm;

// Creates a BrowserCdm for |key_system|. Returns NULL if the CDM cannot be
// created.
// TODO(xhwang): Add ifdef for IPC based CDM.
scoped_ptr<BrowserCdm> MEDIA_EXPORT
    CreateBrowserCdm(const std::string& key_system,
                     const SessionCreatedCB& session_created_cb,
                     const SessionMessageCB& session_message_cb,
                     const SessionReadyCB& session_ready_cb,
                     const SessionClosedCB& session_closed_cb,
                     const SessionErrorCB& session_error_cb);

}  // namespace media

#endif  // MEDIA_BASE_BROWSER_CDM_FACTORY_H_