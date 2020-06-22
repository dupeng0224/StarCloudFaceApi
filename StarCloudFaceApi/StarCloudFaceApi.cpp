#include "StarCloudFaceApi.h"
using namespace std;
int sdk_init(bool id_card)
{
    return api->sdk_init(id_card);
}

// ��ѯ�Ƿ�ͨ����Ȩ
bool is_auth()
{
    return api->is_auth();
}

// ��ȡ�豸ָ��
const char* get_device_id()
{
    return api->get_device_id();
}
// ��������
const char* face_attr(const char* image, int img_type)
{
    return api->face_attr(image, img_type);
}
// ��������(���������ͼƬbuf)
const char* face_attr_by_buf(const unsigned char* image, int size)
{
    return api->face_attr_by_buf(image, size);
}
// �������ԣ�����opencv��Ƶ֡��
const char* face_attr_by_mat(const cv::Mat& mat)
{
    return api->face_attr_by_mat(mat);
}
// �������ԣ�����opencv��Ƶ֡��Ҫ��ȡ���������ԣ���Ӧ�ڶ�����)
const char* face_attr_by_face(const cv::Mat& mat, const TrackFaceInfo& info)
{
    return api->face_attr_by_face(mat, info);
}
// ��������
const char* face_quality(const char* image, int img_type)
{
    return api->face_quality(image, img_type);
}
// ��������(���������ͼƬbuf)
const char* face_quality_by_buf(const unsigned char* image, int size)
{
    return api->face_quality_by_buf(image, size);
}
// ��������������opencv��Ƶ֡��
const char* face_quality_by_mat(const cv::Mat& mat)
{
    return api->face_quality_by_mat(mat);
}
// ��������������opencv��Ƶ֡��Ҫ��ȡ���������ԣ���Ӧ�ڶ�����)
const char* face_quality_by_face(const cv::Mat& mat, const TrackFaceInfo& info)
{
    return api->face_quality_by_face(mat, info);
}
//����ע��
const char* user_add(const char* user_id, const char* group_id, const char* image, int img_type, const char* user_info)
{
    return api->user_add(user_id, group_id, image, img_type, user_info);
}
//����ע��(���������ͼƬbuf)
const char* user_add_by_buf(const char* user_id, const char* group_id, const unsigned char* image, int size, const char* user_info)
{
    return api->user_add_by_buf(user_id, group_id, image, size, user_info);
}
// ��������
const char* user_update(const char* user_id, const char* group_id, const char* image, int img_type, const char* user_info)
{
    return api->user_update(user_id, group_id, image, img_type, user_info);
}
// ��������(���������ͼƬbuf)
const char* user_update_by_buf(const char* user_id, const char* group_id, const unsigned char* image, int size, const char* user_info)
{
    return api->user_update_by_buf(user_id, group_id, image, size, user_info);
}
// ����ɾ��
const char* user_face_delete(const char* user_id, const char* group_id, const char* face_token)
{
    return api->user_face_delete(user_id, group_id, face_token);
}
// �û�ɾ��
const char* user_delete(const char* user_id, const char* group_id)
{
    return api->user_delete(user_id, group_id);
}
// �����
const char* group_add(const char* group_id)
{
    return api->group_add(group_id);
}
// ��ɾ��
const char* group_delete(const char* group_id)
{
    return api->group_delete(group_id);
}
// ��ѯ�û���Ϣ
const char* get_user_info(const char* user_id, const char* group_id)
{
    return api->get_user_info(user_id, group_id);
}
// �û����б��ѯ
const char* get_user_list(const char* group_id, int start, int length)
{
    return api->get_user_list(group_id, start, length);
}
// ���б��ѯ
const char* get_group_list(int start, int length)
{
    return api->get_group_list(start, length);
}
// �����Ա�
const char* match(const char* image1, int img_type1, const char* image2, int img_type2)
{
    return api->match(image1, img_type1, image2, img_type2);
}
// �����Ա�
const char* match_by_buf(const unsigned char* image1, int size1, const unsigned char* image2, int size2)
{
    return api->match_by_buf(image1, size1, image2, size2);
}
// �����Ա�(ͼƬ����Ƶ֡�Ա�)
const char* match_by_img_and_frame(const char* image1, int img_type1, const cv::Mat& mat)
{
    return api->match_by_img_and_frame(image1, img_type1, mat);
}

// �����Ա�(����ֵ��ͼƬ�ȶ�)
const char* match_by_feature(const std::vector<float>& f1, const char* image2, int img_type2)
{
    return api->match_by_feature(f1, image2, img_type2);
}
// �����Ա�(����ֵ��ͼƬ������buffer�ȶ�)
const char* match_by_feature_buf(const std::vector<float>& f1, const unsigned char* image2, int size)
{
    return api->match_by_feature(f1, image2, size);
}
// ���������⵽�ڴ�
bool load_db_face()
{
    return api->load_db_face();
}

// ����ʶ��
const char* identify(const char* image, int img_type, const char* group_id_list, const char* user_id, int user_top_num)
{
    return api->identify(image, img_type, group_id_list, user_id, user_top_num);
}
// ����ʶ��(��������Ƚ�,��ǰ����)
const char* identify_full(const char* image, int img_type, int user_top_num)
{
    return api->identify(image, img_type, user_top_num);
}
// ����ʶ��(����opencv��Ƶ֡)
const char* identify_by_mat(const cv::Mat& mat, const char* group_id_list, const char* user_id, int user_top_num)
{
    return api->identify(mat, group_id_list, user_id, user_top_num);
}
// ����ʶ��(����opencv��Ƶ֡)(��������Ƚϣ���ǰ����)
const char* identify_by_mat_full(const cv::Mat& mat, int user_top_num)
{
    return api->identify(mat, user_top_num);
}

// ����ʶ��(���������ͼƬbuf)
const char* identify_by_buf(const unsigned char* image, int size, const char* group_id_list, const char* user_id, int user_top_num)
{
    return api->identify_by_buf(image, size, group_id_list, user_id, user_top_num);
}

// ����ʶ��(���������ͼƬbuf)(��������Ƚϣ���ǰ����)
const char* identify_by_buf_full(const unsigned char* image, int size, int user_top_num)
{
    return api->identify_by_buf(image, size, user_top_num);
}
// ����ʶ��(��������ֵfeature)
const char* identify_by_feature(const std::vector<float>& f1, const char* group_id_list, const char* user_id, int user_top_num)
{
    return api->identify_by_feature(f1, group_id_list, user_id, user_top_num);
}

// ����ʶ��(��������ֵfeature)(��������Ƚϣ���ǰ����)
const char* identify_by_feature_full(const std::vector<float>& f1, int user_top_num)
{
    return api->identify_by_feature(f1, user_top_num);
}

//����Ϊ�ɼ���������
// �����Ƿ�ִ��������⣬Ĭ��Ϊfalse
void set_isCheckQuality(bool flag)
{
    api->set_isCheckQuality(false);
}
// ������ֵ��ȡֵ��Χ0~255��Ĭ��40��Խ���������Խ��
void set_illum_thr(float thr)
{
    api->set_illum_thr(thr);
}
// ģ����ֵ��ȡֵ��Χ0~1��Ĭ��0.7��ԽС����ͼ��Խ����
// ������Ϊ1ʱ��ģ����ⲻ�����ҽ����ͨ����������Ϊ0ʱ��ģ����ⲻ�����ҽ��ͨ��
void set_blur_thr(float thr)
{
    api->set_blur_thr(thr);
}
// ���ۡ����ۡ����ӡ���͡������ա������ա��°͵��ڵ���ֵ��ȡֵ��Χ0~1��Ĭ��0.5��ֵԽС�����ڵ�����ԽС
// ������Ϊ1ʱ���ڵ���ⲻ�����ҽ����ͨ����������Ϊ0ʱ���ڵ���ⲻ�����ҽ��ͨ��
void set_occlu_thr(float thr)
{
    api->set_occlu_thr(thr);
}
// ����pitch��yaw��roll�ȽǶȵ���ֵ��Ĭ�϶�Ϊ15&deg;��Խ�����ɲɼ��������Ƕ�Խ�󣬵��ǽǶ�Խ��ʶ��Ч����Խ��
void set_eulur_angle_thr(int pitch_thr, int yaw_thr, int roll_thr)
{
    api->set_eulur_angle_thr(pitch_thr, yaw_thr, roll_thr);
}

// �����������Ŷ���ֵ��ȡֵ��Χ0~1��ȡ0����Ϊ���м������Ľ������������Ĭ��0.5
void set_notFace_thr(float thr)
{
    api->set_notFace_thr(thr);
}
// ��С�����ߴ磺��Ҫ��⵽����С�����ߴ磬������Ҫ��⵽30*30������������Ϊ30��
// �óߴ�ռͼ�����ԽС�����ٶ�Խ����������ο�����ָ���½ڡ�Ĭ��ֵ30
void set_min_face_size(int size)
{
    api->set_min_face_size(size);
}
// ���ٵ�Ŀ���ִ�м���ʱ��������λ���룬Ĭ��300��ֵԽСԽ����췢����Ŀ�꣬����cpuռ���ʻ���ߡ������ٶȱ���
void set_track_by_detection_interval(int interval_in_ms)
{
    api->set_track_by_detection_interval(interval_in_ms);
}

// δ���ٵ�Ŀ��ʱ�ļ��������λ���룬Ĭ��300��ֵԽСԽ�췢����Ŀ�꣬����cpuռ���ʻ���ߡ������ٶȱ���
void set_detect_in_video_interval(int interval_in_ms)
{
    api->set_detect_in_video_interval(interval_in_ms);
}

/*
* std::vector<TrackFaceInfo> *& out:�����ļ���������Ϣ
* const char* img  : Input img,1 is base64 img, 2 is file path
* int imgType : Input img's coding type ,1 is base64 img, 2 is file path
* int maxTrackObjNum: ���Ҫtracking��������������Ϊ1��ֻtrackingһ���ˣ��������Ϊ3�����tracking 3���ˡ�
* return Ϊ���صļ����������
*/
int track(std::vector<TrackFaceInfo>*& out, const char* image, int img_type, int maxTrackObjNum)
{
    return api->track(out, image, img_type, maxTrackObjNum);
}

int track_by_mat(std::vector<TrackFaceInfo>*& out, const cv::Mat& mat, int maxTrackObjNum)
{
    return api->track(out, mat, maxTrackObjNum);
}
// ������⣨���������ͼƬbuf��
int track_by_buf(std::vector<TrackFaceInfo>*& out, const unsigned char* image, int size, int maxTrackObjNum)
{
    return api->track_by_buf(out, image, size, maxTrackObjNum);
}

// ֻ�����������������ͬtrack
int track_max_face(std::vector<TrackFaceInfo>*& out, const char* image, int img_type)
{
    return api->track_max_face(out, image, img_type);
}
int track_max_face_by_mat(std::vector<TrackFaceInfo>*& out, const cv::Mat& mat)
{
    return api->track_max_face(out, mat);
}
// ���������⣨���������ͼƬbuf��
int track_max_face_by_buf(std::vector<TrackFaceInfo>*& out, const unsigned char* image, int size)
{
    return api->track_max_face_by_buf(out, image, size);
}
//����Ѹ��ٵ���������Ϣ
void clearTrackedFaces()
{
    api->clearTrackedFaces();
}


//����IR��Ĭ������
const char* ir_liveness_check(const char* image, int img_type)
{
    return api->ir_liveness_check(image, img_type);
}
//����IR��Ĭ������(����opencv����Ƶ֡)
const char* ir_liveness_check_by_mat(const cv::Mat& mat)
{
    return api->ir_liveness_check(mat);
}
//����IR��Ĭ�����⣨���������ͼƬbuf��
const char* ir_liveness_check_by_buf(const unsigned char* image, int size)
{
    return api->ir_liveness_check_by_buf(image, size);
}
//��ĿRGB����������
const char* rgb_liveness_check(const char* image, int img_type)
{
    return api->rgb_liveness_check(image, img_type);
}
//��ĿRGB����������(����opencv����Ƶ֡)
const char* rgb_liveness_check_by_mat(const cv::Mat& mat)
{
    return api->rgb_liveness_check(mat);
}
//��ĿRGB���������⣨���������ͼƬbuf��
const char* rgb_liveness_check_by_buf(const unsigned char* image, int size)
{
    return api->rgb_liveness_check_by_buf(image, size);
}

//˫ĿRGB��IR���������⣨���������ͼƬbuf��
const char* rgb_ir_liveness_check_by_buf(const unsigned char* rgb_img, int rgb_size, const unsigned char* ir_img, int ir_size)
{
    return api->rgb_ir_liveness_check_by_buf(rgb_img, rgb_size, ir_img, ir_size);
}
//˫ĿRGB��IR����������(����opencv����Ƶ֡)
const char* rgb_ir_liveness_check(std::vector<TrackFaceInfo>*& out, const cv::Mat& rgb_mat, const cv::Mat& ir_mat, float& rgb_score, float& ir_score)
{
    return api->rgb_ir_liveness_check(out, rgb_mat, ir_mat, rgb_score, ir_score);
}
//˫Ŀ���(depth)���������⣨���������ͼƬbuf��
const char* rgb_depth_liveness_check_by_buf(const unsigned char* rgb_img, int rgb_size, const unsigned char* depth_img, int depth_size)
{
    return api->rgb_depth_liveness_check_by_buf(rgb_img, rgb_size, depth_img, depth_size);
}

//˫ĿRGB��depth����������(����opencv����Ƶ֡)
const char* rgb_depth_liveness_check(std::vector<TrackFaceInfo>*& out, const cv::Mat& rgb_mat, const cv::Mat& depth_mat, float& rgb_score, float& depth_score)
{
    return api->rgb_depth_liveness_check(out, rgb_mat, depth_mat, rgb_score, depth_score);
}

//��ȡ��⵽��������Ϣ������intΪ��������
int get_tracked_faces(std::vector<TrackFaceInfo>*& vec)
{
    return api->get_tracked_faces(vec);
}

//��ȡ��������ֵ(����ͼƬ)
int get_face_feature(const char* image, int img_type, const float*& feature)
{
    return api->get_face_feature(image, img_type, feature);
}
//��ȡ��������ֵ(����opencv��Ƶ֡)
int get_face_feature_by_mat(const cv::Mat& mat, const float*& feature)
{
    return api->get_face_feature(mat, feature);
}
// //��ȡ��������ֵ(���������ͼƬbuf)
int get_face_feature_by_buf(const unsigned char* image, int size, const float*& feature)
{
    return api->get_face_feature_by_buf(image, size, feature);
}
// ��ȡ��������ֵ������opencv��Ƶ֡��������Ϣ����Ӧ�ڶ�������
int get_face_feature_by_face(const cv::Mat& mat, const TrackFaceInfo& info, const float*& feature)
{
    return api->get_face_feature_by_face(mat, info, feature);
}
//����ֵ�ȶ�
float compare_feature(const std::vector<float>& f1, const std::vector<float>& f2)
{
    return api->compare_feature(f1, f2);
}