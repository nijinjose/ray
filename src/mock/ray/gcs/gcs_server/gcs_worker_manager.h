// Copyright  The Ray Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

namespace ray {
namespace gcs {

class MockGcsWorkerManager : public GcsWorkerManager {
 public:
  MOCK_METHOD(void,
              HandleReportWorkerFailure,
              (rpc::ReportWorkerFailureRequest request,
               rpc::ReportWorkerFailureReply *reply,
               rpc::SendReplyCallback send_reply_callback),
              (override));
  MOCK_METHOD(void,
              HandleGetWorkerInfo,
              (rpc::GetWorkerInfoRequest request,
               rpc::GetWorkerInfoReply *reply,
               rpc::SendReplyCallback send_reply_callback),
              (override));
  MOCK_METHOD(void,
              HandleGetAllWorkerInfo,
              (rpc::GetAllWorkerInfoRequest request,
               rpc::GetAllWorkerInfoReply *reply,
               rpc::SendReplyCallback send_reply_callback),
              (override));
  MOCK_METHOD(void,
              HandleAddWorkerInfo,
              (rpc::AddWorkerInfoRequest request,
               rpc::AddWorkerInfoReply *reply,
               rpc::SendReplyCallback send_reply_callback),
              (override));
  MOCK_METHOD(void,
              HandleUpdateWorkerDebuggerPort,
              (rpc::UpdateWorkerDebuggerPortRequest request,
               rpc::UpdateWorkerDebuggerPortReply *reply,
               rpc::SendReplyCallback send_reply_callback),
              (override));
};

}  // namespace gcs
}  // namespace ray
