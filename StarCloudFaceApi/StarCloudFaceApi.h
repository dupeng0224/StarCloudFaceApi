#pragma once
#include "baidu_face_api.h"

// sdk 初始化
// id_card默认为false，若设为true表示采取证件照模式，和非证件照模式人脸特征值不通用
extern "C" _declspec(dllexport) int sdk_init(bool id_card = false);
// 查询是否通过鉴权
extern "C" _declspec(dllexport) bool is_auth();

// 获取设备指纹
extern "C" _declspec(dllexport) const char* get_device_id();
// 人脸特性
extern "C" _declspec(dllexport) const char* face_attr(const char* image, int img_type);
// 人脸特性(传入二进制图片buf)
extern "C" _declspec(dllexport) const char* face_attr_by_buf(const unsigned char* image, int size);
// 人脸特性（传入opencv视频帧）
extern "C" _declspec(dllexport) const char* face_attr_by_mat(const cv::Mat & mat);
// 人脸特性（传入opencv视频帧及要获取的人脸属性，适应于多人脸)
extern "C" _declspec(dllexport) const char* face_attr_by_face(const cv::Mat & mat, const TrackFaceInfo & info);
// 人脸质量
extern "C" _declspec(dllexport) const char* face_quality(const char* image, int img_type);
// 人脸质量(传入二进制图片buf)
extern "C" _declspec(dllexport) const char* face_quality_by_buf(const unsigned char* image, int size);
// 人脸质量（传入opencv视频帧）
extern "C" _declspec(dllexport) const char* face_quality_by_mat(const cv::Mat & mat);
// 人脸质量（传入opencv视频帧及要获取的人脸属性，适应于多人脸)
extern "C" _declspec(dllexport) const char* face_quality_by_face(const cv::Mat & mat, const TrackFaceInfo & info);
//人脸注册
extern "C" _declspec(dllexport) const char* user_add(const char* user_id, const char* group_id, const char* image, int img_type, const char* user_info = nullptr);
//人脸注册(传入二进制图片buf)
extern "C" _declspec(dllexport) const char* user_add_by_buf(const char* user_id, const char* group_id, const unsigned char* image, int size, const char* user_info = nullptr);
// 人脸更新
extern "C" _declspec(dllexport) const char* user_update(const char* user_id, const char* group_id, const char* image, int img_type, const char* user_info = nullptr);
// 人脸更新(传入二进制图片buf)
extern "C" _declspec(dllexport) const char* user_update_by_buf(const char* user_id, const char* group_id, const unsigned char* image, int size, const char* user_info = nullptr);
// 人脸删除
extern "C" _declspec(dllexport) const char* user_face_delete(const char* user_id, const char* group_id, const char* face_token);
// 用户删除
extern "C" _declspec(dllexport) const char* user_delete(const char* user_id, const char* group_id);
// 组添加
extern "C" _declspec(dllexport) const char* group_add(const char* group_id);
// 组删除
extern "C" _declspec(dllexport) const char* group_delete(const char* group_id);
// 查询用户信息
extern "C" _declspec(dllexport) const char* get_user_info(const char* user_id, const char* group_id);
// 用户组列表查询
extern "C" _declspec(dllexport) const char* get_user_list(const char* group_id, int start = 0, int length = 100);
// 组列表查询
extern "C" _declspec(dllexport) const char* get_group_list(int start = 0, int length = 100);
// 人脸对比
extern "C" _declspec(dllexport) const char* match(const char* image1, int img_type1, const char* image2, int img_type2);
// 人脸对比
extern "C" _declspec(dllexport) const char* match_by_buf(const unsigned char* image1, int size1, const unsigned char* image2, int size2);
// 人脸对比(图片和视频帧对比)
extern "C" _declspec(dllexport) const char* match_by_img_and_frame(const char* image1, int img_type1, const cv::Mat & mat);
// 人脸对比(特征值和图片比对)
extern "C" _declspec(dllexport) const char* match_by_feature(const std::vector<float> & f1, const char* image2, int img_type2);
// 人脸对比(特征值和图片二进制buffer比对)
extern "C" _declspec(dllexport) const char* match_by_feature_buf(const std::vector<float> & f1, const unsigned char* image2, int size);
// 加载人脸库到内存
extern "C" _declspec(dllexport) bool load_db_face();
// 人脸识别
extern "C" _declspec(dllexport) const char* identify(const char* image, int img_type, const char* group_id_list, const char* user_id, int user_top_num = 1);
// 人脸识别(和整个库比较,提前加载)
extern "C" _declspec(dllexport) const char* identify_full(const char* image, int img_type, int user_top_num = 1);
// 人脸识别(传入opencv视频帧)
extern "C" _declspec(dllexport) const char* identify_by_mat(const cv::Mat & mat, const char* group_id_list, const char* user_id, int user_top_num = 1);
// 人脸识别(传入opencv视频帧)(和整个库比较，提前加载)
extern "C" _declspec(dllexport) const char* identify_by_mat_full(const cv::Mat & mat, int user_top_num = 1);
// 人脸识别(传入二进制图片buf)
extern "C" _declspec(dllexport) const char* identify_by_buf(const unsigned char* image, int size, const char* group_id_list, const char* user_id, int user_top_num = 1);
// 人脸识别(传入二进制图片buf)(和整个库比较，提前加载)
extern "C" _declspec(dllexport) const char* identify_by_buf_full(const unsigned char* image, int size, int user_top_num = 1);
// 人脸识别(传入特征值feature)
extern "C" _declspec(dllexport) const char* identify_by_feature(const std::vector<float> & f1, const char* group_id_list, const char* user_id, int user_top_num = 1);

// 人脸识别(传入特征值feature)(和整个库比较，提前加载)
extern "C" _declspec(dllexport) const char* identify_by_feature_full(const std::vector<float> & f1, int user_top_num = 1);

//以下为采集函数设置
// 设置是否执行质量检测，默认为false
extern "C" _declspec(dllexport) void set_isCheckQuality(bool flag = false);
// 光照阈值，取值范围0~255，默认40，越大代表脸部越亮
extern "C" _declspec(dllexport) void set_illum_thr(float thr = 40);
// 模糊阈值，取值范围0~1，默认0.7，越小代表图像越清晰
// 当设置为1时，模糊检测不进行且结果不通过；当设置为0时，模糊检测不进行且结果通过
extern "C" _declspec(dllexport) void set_blur_thr(float thr = 0.7);
// 右眼、左眼、鼻子、嘴巴、左脸颊、右脸颊、下巴的遮挡阈值，取值范围0~1，默认0.5，值越小代表遮挡程序越小
// 当设置为1时，遮挡检测不进行且结果不通过；当设置为0时，遮挡检测不进行且结果通过
extern "C" _declspec(dllexport) void set_occlu_thr(float thr = 0.5);
// 设置pitch、yaw、roll等角度的阈值，默认都为15&deg;，越大代表可采集的人脸角度越大，但是角度越大识别效果会越差
extern "C" _declspec(dllexport) void set_eulur_angle_thr(int pitch_thr = 15, int yaw_thr = 15, int roll_thr = 15);

// 非人脸的置信度阈值，取值范围0~1，取0则认为所有检测出来的结果都是人脸，默认0.5
extern "C" _declspec(dllexport) void set_notFace_thr(float thr = 0.5);
// 最小人脸尺寸：需要检测到的最小人脸尺寸，比如需要检测到30*30的人脸则设置为30，
// 该尺寸占图像比例越小则检测速度越慢，具体请参考性能指标章节。默认值30
extern "C" _declspec(dllexport) void set_min_face_size(int size = 30);
// 跟踪到目标后执行检测的时间间隔，单位毫秒，默认300，值越小越会更快发现新目标，但是cpu占用率会提高、处理速度变慢
extern "C" _declspec(dllexport) void set_track_by_detection_interval(int interval_in_ms = 300);
// 未跟踪到目标时的检测间隔，单位毫秒，默认300，值越小越快发现新目标，但是cpu占用率会提高、处理速度变慢
extern "C" _declspec(dllexport) void set_detect_in_video_interval(int interval_in_ms = 300);

/*
* std::vector<TrackFaceInfo> *& out:传出的检测后人脸信息
* const char* img  : Input img,1 is base64 img, 2 is file path
* int imgType : Input img's coding type ,1 is base64 img, 2 is file path
* int maxTrackObjNum: 最多要tracking人数，例如设置为1则只tracking一个人，如果设置为3则最多tracking 3个人。
* return 为返回的检测人脸数量
*/
extern "C" _declspec(dllexport) int track(std::vector<TrackFaceInfo> * &out, const char* image, int img_type, int maxTrackObjNum);

extern "C" _declspec(dllexport) int track_by_mat(std::vector<TrackFaceInfo> * &out, const cv::Mat & mat, int maxTrackObjNum);
// 人脸检测（传入二进制图片buf）
extern "C" _declspec(dllexport) int track_by_buf(std::vector<TrackFaceInfo> * &out, const unsigned char* image, int size, int maxTrackObjNum);

// 只跟踪最大人脸，参数同track
extern "C" _declspec(dllexport) int track_max_face(std::vector<TrackFaceInfo> * &out, const char* image, int img_type);
extern "C" _declspec(dllexport) int track_max_face_by_mat(std::vector<TrackFaceInfo> * &out, const cv::Mat & mat);
// 最大人脸检测（传入二进制图片buf）
extern "C" _declspec(dllexport) int track_max_face_by_buf(std::vector<TrackFaceInfo> * &out, const unsigned char* image, int size);
//清除已跟踪到的人脸信息
extern "C" _declspec(dllexport) void clearTrackedFaces();


//红外IR静默活体检测
extern "C" _declspec(dllexport) const char* ir_liveness_check(const char* image, int img_type);
//红外IR静默活体检测(传入opencv的视频帧)
extern "C" _declspec(dllexport) const char* ir_liveness_check_by_mat(const cv::Mat & mat);
//红外IR静默活体检测（传入二进制图片buf）
extern "C" _declspec(dllexport) const char* ir_liveness_check_by_buf(const unsigned char* image, int size);
//单目RGB静脉活体检测
extern "C" _declspec(dllexport) const char* rgb_liveness_check(const char* image, int img_type);
//单目RGB静脉活体检测(传入opencv的视频帧)
extern "C" _declspec(dllexport) const char* rgb_liveness_check_by_mat(const cv::Mat & mat);
//单目RGB静脉活体检测（传入二进制图片buf）
extern "C" _declspec(dllexport) const char* rgb_liveness_check_by_buf(const unsigned char* image, int size);

//双目RGB和IR静脉活体检测（传入二进制图片buf）
extern "C" _declspec(dllexport) const char* rgb_ir_liveness_check_by_buf(const unsigned char* rgb_img, int rgb_size, const unsigned char* ir_img, int ir_size);
//双目RGB和IR静脉活体检测(传入opencv的视频帧)
extern "C" _declspec(dllexport) const char* rgb_ir_liveness_check(std::vector<TrackFaceInfo> * &out, const cv::Mat & rgb_mat, const cv::Mat & ir_mat, float& rgb_score, float& ir_score);
//双目深度(depth)静脉活体检测（传入二进制图片buf）
extern "C" _declspec(dllexport) const char* rgb_depth_liveness_check_by_buf(const unsigned char* rgb_img, int rgb_size, const unsigned char* depth_img, int depth_size);

//双目RGB和depth静脉活体检测(传入opencv的视频帧)
extern "C" _declspec(dllexport) const char* rgb_depth_liveness_check(std::vector<TrackFaceInfo> * &out, const cv::Mat & rgb_mat, const cv::Mat & depth_mat, float& rgb_score, float& depth_score);

//获取检测到的人脸信息，返回int为人脸个数
extern "C" _declspec(dllexport) int get_tracked_faces(std::vector<TrackFaceInfo> * &vec);

//获取人脸特征值(传入图片)
extern "C" _declspec(dllexport) int get_face_feature(const char* image, int img_type, const float*& feature);
//获取人脸特征值(传入opencv视频帧)
extern "C" _declspec(dllexport) int get_face_feature_by_mat(const cv::Mat & mat, const float*& feature);
// //获取人脸特征值(传入二进制图片buf)
extern "C" _declspec(dllexport) int get_face_feature_by_buf(const unsigned char* image, int size,
    const float*& feature);
// 获取人脸特征值（传入opencv视频帧及人脸信息，适应于多人脸）
extern "C" _declspec(dllexport) int get_face_feature_by_face(const cv::Mat & mat, const TrackFaceInfo & info, const float*& feature);
//特征值比对
extern "C" _declspec(dllexport) float compare_feature(const std::vector<float> & f1, const std::vector<float> & f2);

static BaiduFaceApi* api = new BaiduFaceApi();

class StarCloudFaceApi
{
public:
};

