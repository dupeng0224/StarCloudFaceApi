#pragma once
#include "baidu_face_api.h"

// sdk ��ʼ��
// id_cardĬ��Ϊfalse������Ϊtrue��ʾ��ȡ֤����ģʽ���ͷ�֤����ģʽ��������ֵ��ͨ��
extern "C" _declspec(dllexport) int sdk_init(bool id_card = false);
// ��ѯ�Ƿ�ͨ����Ȩ
extern "C" _declspec(dllexport) bool is_auth();

// ��ȡ�豸ָ��
extern "C" _declspec(dllexport) const char* get_device_id();
// ��������
extern "C" _declspec(dllexport) const char* face_attr(const char* image, int img_type);
// ��������(���������ͼƬbuf)
extern "C" _declspec(dllexport) const char* face_attr_by_buf(const unsigned char* image, int size);
// �������ԣ�����opencv��Ƶ֡��
extern "C" _declspec(dllexport) const char* face_attr_by_mat(const cv::Mat & mat);
// �������ԣ�����opencv��Ƶ֡��Ҫ��ȡ���������ԣ���Ӧ�ڶ�����)
extern "C" _declspec(dllexport) const char* face_attr_by_face(const cv::Mat & mat, const TrackFaceInfo & info);
// ��������
extern "C" _declspec(dllexport) const char* face_quality(const char* image, int img_type);
// ��������(���������ͼƬbuf)
extern "C" _declspec(dllexport) const char* face_quality_by_buf(const unsigned char* image, int size);
// ��������������opencv��Ƶ֡��
extern "C" _declspec(dllexport) const char* face_quality_by_mat(const cv::Mat & mat);
// ��������������opencv��Ƶ֡��Ҫ��ȡ���������ԣ���Ӧ�ڶ�����)
extern "C" _declspec(dllexport) const char* face_quality_by_face(const cv::Mat & mat, const TrackFaceInfo & info);
//����ע��
extern "C" _declspec(dllexport) const char* user_add(const char* user_id, const char* group_id, const char* image, int img_type, const char* user_info = nullptr);
//����ע��(���������ͼƬbuf)
extern "C" _declspec(dllexport) const char* user_add_by_buf(const char* user_id, const char* group_id, const unsigned char* image, int size, const char* user_info = nullptr);
// ��������
extern "C" _declspec(dllexport) const char* user_update(const char* user_id, const char* group_id, const char* image, int img_type, const char* user_info = nullptr);
// ��������(���������ͼƬbuf)
extern "C" _declspec(dllexport) const char* user_update_by_buf(const char* user_id, const char* group_id, const unsigned char* image, int size, const char* user_info = nullptr);
// ����ɾ��
extern "C" _declspec(dllexport) const char* user_face_delete(const char* user_id, const char* group_id, const char* face_token);
// �û�ɾ��
extern "C" _declspec(dllexport) const char* user_delete(const char* user_id, const char* group_id);
// �����
extern "C" _declspec(dllexport) const char* group_add(const char* group_id);
// ��ɾ��
extern "C" _declspec(dllexport) const char* group_delete(const char* group_id);
// ��ѯ�û���Ϣ
extern "C" _declspec(dllexport) const char* get_user_info(const char* user_id, const char* group_id);
// �û����б��ѯ
extern "C" _declspec(dllexport) const char* get_user_list(const char* group_id, int start = 0, int length = 100);
// ���б��ѯ
extern "C" _declspec(dllexport) const char* get_group_list(int start = 0, int length = 100);
// �����Ա�
extern "C" _declspec(dllexport) const char* match(const char* image1, int img_type1, const char* image2, int img_type2);
// �����Ա�
extern "C" _declspec(dllexport) const char* match_by_buf(const unsigned char* image1, int size1, const unsigned char* image2, int size2);
// �����Ա�(ͼƬ����Ƶ֡�Ա�)
extern "C" _declspec(dllexport) const char* match_by_img_and_frame(const char* image1, int img_type1, const cv::Mat & mat);
// �����Ա�(����ֵ��ͼƬ�ȶ�)
extern "C" _declspec(dllexport) const char* match_by_feature(const std::vector<float> & f1, const char* image2, int img_type2);
// �����Ա�(����ֵ��ͼƬ������buffer�ȶ�)
extern "C" _declspec(dllexport) const char* match_by_feature_buf(const std::vector<float> & f1, const unsigned char* image2, int size);
// ���������⵽�ڴ�
extern "C" _declspec(dllexport) bool load_db_face();
// ����ʶ��
extern "C" _declspec(dllexport) const char* identify(const char* image, int img_type, const char* group_id_list, const char* user_id, int user_top_num = 1);
// ����ʶ��(��������Ƚ�,��ǰ����)
extern "C" _declspec(dllexport) const char* identify_full(const char* image, int img_type, int user_top_num = 1);
// ����ʶ��(����opencv��Ƶ֡)
extern "C" _declspec(dllexport) const char* identify_by_mat(const cv::Mat & mat, const char* group_id_list, const char* user_id, int user_top_num = 1);
// ����ʶ��(����opencv��Ƶ֡)(��������Ƚϣ���ǰ����)
extern "C" _declspec(dllexport) const char* identify_by_mat_full(const cv::Mat & mat, int user_top_num = 1);
// ����ʶ��(���������ͼƬbuf)
extern "C" _declspec(dllexport) const char* identify_by_buf(const unsigned char* image, int size, const char* group_id_list, const char* user_id, int user_top_num = 1);
// ����ʶ��(���������ͼƬbuf)(��������Ƚϣ���ǰ����)
extern "C" _declspec(dllexport) const char* identify_by_buf_full(const unsigned char* image, int size, int user_top_num = 1);
// ����ʶ��(��������ֵfeature)
extern "C" _declspec(dllexport) const char* identify_by_feature(const std::vector<float> & f1, const char* group_id_list, const char* user_id, int user_top_num = 1);

// ����ʶ��(��������ֵfeature)(��������Ƚϣ���ǰ����)
extern "C" _declspec(dllexport) const char* identify_by_feature_full(const std::vector<float> & f1, int user_top_num = 1);

//����Ϊ�ɼ���������
// �����Ƿ�ִ��������⣬Ĭ��Ϊfalse
extern "C" _declspec(dllexport) void set_isCheckQuality(bool flag = false);
// ������ֵ��ȡֵ��Χ0~255��Ĭ��40��Խ���������Խ��
extern "C" _declspec(dllexport) void set_illum_thr(float thr = 40);
// ģ����ֵ��ȡֵ��Χ0~1��Ĭ��0.7��ԽС����ͼ��Խ����
// ������Ϊ1ʱ��ģ����ⲻ�����ҽ����ͨ����������Ϊ0ʱ��ģ����ⲻ�����ҽ��ͨ��
extern "C" _declspec(dllexport) void set_blur_thr(float thr = 0.7);
// ���ۡ����ۡ����ӡ���͡������ա������ա��°͵��ڵ���ֵ��ȡֵ��Χ0~1��Ĭ��0.5��ֵԽС�����ڵ�����ԽС
// ������Ϊ1ʱ���ڵ���ⲻ�����ҽ����ͨ����������Ϊ0ʱ���ڵ���ⲻ�����ҽ��ͨ��
extern "C" _declspec(dllexport) void set_occlu_thr(float thr = 0.5);
// ����pitch��yaw��roll�ȽǶȵ���ֵ��Ĭ�϶�Ϊ15&deg;��Խ�����ɲɼ��������Ƕ�Խ�󣬵��ǽǶ�Խ��ʶ��Ч����Խ��
extern "C" _declspec(dllexport) void set_eulur_angle_thr(int pitch_thr = 15, int yaw_thr = 15, int roll_thr = 15);

// �����������Ŷ���ֵ��ȡֵ��Χ0~1��ȡ0����Ϊ���м������Ľ������������Ĭ��0.5
extern "C" _declspec(dllexport) void set_notFace_thr(float thr = 0.5);
// ��С�����ߴ磺��Ҫ��⵽����С�����ߴ磬������Ҫ��⵽30*30������������Ϊ30��
// �óߴ�ռͼ�����ԽС�����ٶ�Խ����������ο�����ָ���½ڡ�Ĭ��ֵ30
extern "C" _declspec(dllexport) void set_min_face_size(int size = 30);
// ���ٵ�Ŀ���ִ�м���ʱ��������λ���룬Ĭ��300��ֵԽСԽ����췢����Ŀ�꣬����cpuռ���ʻ���ߡ������ٶȱ���
extern "C" _declspec(dllexport) void set_track_by_detection_interval(int interval_in_ms = 300);
// δ���ٵ�Ŀ��ʱ�ļ��������λ���룬Ĭ��300��ֵԽСԽ�췢����Ŀ�꣬����cpuռ���ʻ���ߡ������ٶȱ���
extern "C" _declspec(dllexport) void set_detect_in_video_interval(int interval_in_ms = 300);

/*
* std::vector<TrackFaceInfo> *& out:�����ļ���������Ϣ
* const char* img  : Input img,1 is base64 img, 2 is file path
* int imgType : Input img's coding type ,1 is base64 img, 2 is file path
* int maxTrackObjNum: ���Ҫtracking��������������Ϊ1��ֻtrackingһ���ˣ��������Ϊ3�����tracking 3���ˡ�
* return Ϊ���صļ����������
*/
extern "C" _declspec(dllexport) int track(std::vector<TrackFaceInfo> * &out, const char* image, int img_type, int maxTrackObjNum);

extern "C" _declspec(dllexport) int track_by_mat(std::vector<TrackFaceInfo> * &out, const cv::Mat & mat, int maxTrackObjNum);
// ������⣨���������ͼƬbuf��
extern "C" _declspec(dllexport) int track_by_buf(std::vector<TrackFaceInfo> * &out, const unsigned char* image, int size, int maxTrackObjNum);

// ֻ�����������������ͬtrack
extern "C" _declspec(dllexport) int track_max_face(std::vector<TrackFaceInfo> * &out, const char* image, int img_type);
extern "C" _declspec(dllexport) int track_max_face_by_mat(std::vector<TrackFaceInfo> * &out, const cv::Mat & mat);
// ���������⣨���������ͼƬbuf��
extern "C" _declspec(dllexport) int track_max_face_by_buf(std::vector<TrackFaceInfo> * &out, const unsigned char* image, int size);
//����Ѹ��ٵ���������Ϣ
extern "C" _declspec(dllexport) void clearTrackedFaces();


//����IR��Ĭ������
extern "C" _declspec(dllexport) const char* ir_liveness_check(const char* image, int img_type);
//����IR��Ĭ������(����opencv����Ƶ֡)
extern "C" _declspec(dllexport) const char* ir_liveness_check_by_mat(const cv::Mat & mat);
//����IR��Ĭ�����⣨���������ͼƬbuf��
extern "C" _declspec(dllexport) const char* ir_liveness_check_by_buf(const unsigned char* image, int size);
//��ĿRGB����������
extern "C" _declspec(dllexport) const char* rgb_liveness_check(const char* image, int img_type);
//��ĿRGB����������(����opencv����Ƶ֡)
extern "C" _declspec(dllexport) const char* rgb_liveness_check_by_mat(const cv::Mat & mat);
//��ĿRGB���������⣨���������ͼƬbuf��
extern "C" _declspec(dllexport) const char* rgb_liveness_check_by_buf(const unsigned char* image, int size);

//˫ĿRGB��IR���������⣨���������ͼƬbuf��
extern "C" _declspec(dllexport) const char* rgb_ir_liveness_check_by_buf(const unsigned char* rgb_img, int rgb_size, const unsigned char* ir_img, int ir_size);
//˫ĿRGB��IR����������(����opencv����Ƶ֡)
extern "C" _declspec(dllexport) const char* rgb_ir_liveness_check(std::vector<TrackFaceInfo> * &out, const cv::Mat & rgb_mat, const cv::Mat & ir_mat, float& rgb_score, float& ir_score);
//˫Ŀ���(depth)���������⣨���������ͼƬbuf��
extern "C" _declspec(dllexport) const char* rgb_depth_liveness_check_by_buf(const unsigned char* rgb_img, int rgb_size, const unsigned char* depth_img, int depth_size);

//˫ĿRGB��depth����������(����opencv����Ƶ֡)
extern "C" _declspec(dllexport) const char* rgb_depth_liveness_check(std::vector<TrackFaceInfo> * &out, const cv::Mat & rgb_mat, const cv::Mat & depth_mat, float& rgb_score, float& depth_score);

//��ȡ��⵽��������Ϣ������intΪ��������
extern "C" _declspec(dllexport) int get_tracked_faces(std::vector<TrackFaceInfo> * &vec);

//��ȡ��������ֵ(����ͼƬ)
extern "C" _declspec(dllexport) int get_face_feature(const char* image, int img_type, const float*& feature);
//��ȡ��������ֵ(����opencv��Ƶ֡)
extern "C" _declspec(dllexport) int get_face_feature_by_mat(const cv::Mat & mat, const float*& feature);
// //��ȡ��������ֵ(���������ͼƬbuf)
extern "C" _declspec(dllexport) int get_face_feature_by_buf(const unsigned char* image, int size,
    const float*& feature);
// ��ȡ��������ֵ������opencv��Ƶ֡��������Ϣ����Ӧ�ڶ�������
extern "C" _declspec(dllexport) int get_face_feature_by_face(const cv::Mat & mat, const TrackFaceInfo & info, const float*& feature);
//����ֵ�ȶ�
extern "C" _declspec(dllexport) float compare_feature(const std::vector<float> & f1, const std::vector<float> & f2);

static BaiduFaceApi* api = new BaiduFaceApi();

class StarCloudFaceApi
{
public:
};

