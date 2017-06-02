//
//  LXTAccountNetworking.h
//  LXTStudentClient
//
//  Created by Mac on 16/4/18.
//  Copyright © 2016年 mawei. All rights reserved.
//

#import "LXTBaseNetworking.h"

@interface LXTAPINetworking : LXTBaseNetworking



/**
    初始化
 */
+ (void)initLXTAPI;

// 是否打印Log
+ (void)setLog:(BOOL)islog;


/** 1
 获取集团下的校区的ID
 @param number 账号
 @param password 密码
 @param group_guid 集团guid
 @param complete 成功后回调
 @param fail 失败回调
 */
+ (void)lxt_getSchoolGuidUser:(NSString *)number
                     password:(NSString *)password
                   group_guid:(NSString *)group_guid
                     complete:(Complete)complete
                         fail:(fail)fail;




/**2
 登录接口
 
 @param name 学生账号
 @param password 密码
 @param school_guid 校区ID
 @param complete 成功后回调
 @param fail 失败后回调
 */
+ (void)lxt_loginWithUserName:(NSString *)name
                     password:(NSString *)password
                  school_guid:(NSString *)school_guid
                     complete:(Complete)complete
                         fail:(fail)fail;





/**3
 获取学生个人信息
 
 @param guid 学生guid
 @param token 加密Token
 @param complete 成功后回调
 @param fail 失败后回调
 */
+ (void)lxt_getStudentInformationGuid:(NSString *)guid
                                token:(NSString *)token
                             complete:(Complete)complete
                                 fail:(fail)fail;





/**4
 修改个人信息
 
 @param guid 学生ID
 @param school_guid 校区ID
 @param tel 学生电话
 @param userName 昵称
 @param sex 性别
 @param brithday 生日 时间戳格式
 @param Email 邮箱地址
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_getUpdageStudentInfoGuid:(NSString *)guid
                         school_guid:(NSString *)school_guid
                                 tel:(NSString *)tel
                            userName:(NSString *)userName
                                 sex:(NSString *)sex
                            brithday:(NSString *)brithday
                               Email:(NSString *)Email
                               token:(NSString *)token
                            complete:(Complete)complete
                                fail:(fail)fail;





/**5
 退出登录
 @param guid 学生ID
 @param complete 成功后回调
 @param fail 失败后回调
 */
+ (void)lxt_logOutWithUserGuid:(NSString *)guid
                         token:(NSString *)token
                      complete:(Complete)complete
                          fail:(fail)fail;



/**6
 获取学生课程列表(获取套餐课本信息)
 
 @param guid 学生ID
 @param school_guid  校区ID
 @param token Token
 @param complete 成功后回调
 @param fail 失败后回调
*/

+ (void)lxt_getMyCourseWithStudentID:(NSString *)guid
                          school_guid:(NSString *)school_guid
                                token:(NSString *)token
                             complete:(Complete)complete
                                 fail:(fail)fail;




/**7
 获取当前课本的进度
 
 @param course_guid 商品ID
 @param lesson_guid 课程唯一Id
 @param classType 课程类型
 @param guid 学员ID
 @param token Token
 @param complete 成功后回调
 @param fail 失败后回调
 */
+ (void)lxt_getStudentCourseLessonguid:(NSString *)lesson_guid
                           course_guid:(NSString *)course_guid
                             classType:(NSString *)classType
                             studentID:(NSString *)guid
                                 token:(NSString *)token
                              complete:(Complete)complete
                                  fail:(fail)fail;




/**8
 *  获取老师上课列表
 *
 *  @param guid 学生ID
 *  @param school_guid 校区ID
 *  @param lesson_guid   课程ID
 *  @param sex       性别
 *  @param dateUnix  选择日期 yyyy-MM-dd  (当前日期的时间戳)
 *  @param timeTag   选择时间
 *  @param isCollect 是否是收藏的老师
 *  @param page      当前页码
 *  @param token Token
 *  @param complete 成功后回调
 *  @param fail 失败后回调
 
 */
+ (void)lxt_getTeacherListStudentGuid:(NSString *)guid
                              school_guid:(NSString *)school_guid
                                  classID:(NSString *)lesson_guid
                                      Sex:(NSString *)sex
                                 dateUnix:(NSString *)dateUnix
                                  timeTag:(NSString *)timeTag
                                isCollect:(NSString *)isCollect
                                     Page:(NSString *)page
                                    token:(NSString *)token
                                 complete:(Complete)complete
                                     fail:(fail)fail;






/**9
 获取某个老师的排课列表
 
 @param guid 学生ID
 @param teacher_guid 老师ID
 @param token Token
 @param complete 成功后回调
 @param fail 失败后回调
 */
+ (void)lxt_getTeacherClassGuid:(NSString *)guid
                   teacher_guid:(NSString *)teacher_guid
                    school_guid:(NSString *)school_guid
                          token:(NSString *)token
                       complete:(Complete)complete
                           fail:(fail)fail;




/**10
 获取学生关注的老师
 
 @param guid 学生ID
 @param school_guid 学校ID
 @param lesson_guid 课本ID  如果lesson_guid为空 则显示全部关注的老师，否则是当前课程级别下的老师）
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_getTeacherCollectionListGuid:(NSString *)guid
                             school_guid:(NSString *)school_guid
                             lesson_guid:(NSString *)lesson_guid
                                   token:(NSString *)token
                                complete:(Complete)complete
                                    fail:(fail)fail;





/**11
 添加／删除 关注老师(点击关注与取消关注)
 @param teacher_guid 老师ID
 @param guid 学生ID
 @param school_guid 校区ID
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_teacherCollectionTeacherId:(NSString *)teacher_guid
                             studentId:(NSString *)guid
                           school_guid:(NSString *)school_guid
                                 token:(NSString *)token
                              complete:(Complete)complete
                                  fail:(fail)fail;






/**12
 
 预约课程
 
 @param classtime 当前时间 yyyy-MM-dd 上课开始时间
 @param guid 学生ID
 @param school_guid 校区ID
 @param lesson_list_id 排课ID
 @param teacher_guid 老师ID
 @param book_id 课程类型
 @param lesson_guid 课本ID
 @param timePort 当前几点的课程
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_getAppointmentClasstime:(NSString *)classtime
                               guid:(NSString *)guid
                        school_guid:(NSString *)school_guid
                     lesson_list_id:(NSString *)lesson_list_id
                       teacher_guid:(NSString *)teacher_guid
                            book_id:(NSString *)book_id
                        lesson_guid:(NSString *)lesson_guid
                           timePort:(NSString *)timePort
                              token:(NSString *)token
                           complete:(Complete)complete
                               fail:(fail)fail;

/**13
 获取学生已经约的课程信息
 
 @param guid 学生ID
 @param school_guid 校区ID
 @param page 当前第几页
 @param pageSize 每页显示多少个
 @param token Token
 @param complete 成功回调
 @param fail 回调失败
 */
+ (void)lxt_getStudentAppointCourseGuid:(NSString *)guid
                            school_guid:(NSString *)school_guid
                                   page:(NSInteger)page
                               pageSize:(NSInteger)pageSize
                                  token:(NSString *)token
                               complete:(Complete)complete
                                   fail:(fail)fail;



/**14
 已经上完课程的上课记录
 
 @param guid 学生ID
 @param page 当前显示第几页
 @param pageSize 每页显示的数量
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_getCourseRecordGuid:(NSString *)guid
                           page:(NSInteger)page
                       pageSize:(NSInteger)pageSize
                          token:(NSString *)token
                       complete:(Complete)complete
                           fail:(fail)fail;





/**15
 取消已约的课程
 @param guid 学生ID
 @param bespeak_guid 已约的课程ID
 @param school_guid 校区ID
 @param teacher_guid 教师ID
 @param times 开始上课时间  (格式：2017-05-26 22:30:00)
 @param token Token
 @param complete 成功回调
 @param fail 回调失败
 */

+ (void)lxt_getCancelTheCourseGuid:(NSString *)guid
                      bespeak_guid:(NSString * )bespeak_guid
                       school_guid:(NSString *)school_guid
                      teacher_guid:(NSString * )teacher_guid
                         timesstap:(NSString * )times
                             token:(NSString *)token
                          complete:(Complete)complete
                              fail:(fail)fail;





/**16
 课程上完后对老师的评价
 
 @param guid 学生ID
 @param school_guid 校区ID
 @param bespeak_guid 课程ID
 @param teacher_guid 老师ID
 @param fenshu 评分  最多5分
 @param content 评价内容
 @param tags 标签
 @param token Token
 @param complete 成功回调
 @param fail 回调失败
 */
+ (void)lxt_commentsStudentId:(NSString *)guid
                  school_guid:(NSString *)school_guid
                 bespeak_guid:(NSString *)bespeak_guid
                 teacher_guid:(NSString *)teacher_guid
                       fenshu:(NSInteger )fenshu
                      content:(NSString *)content
                         tags:(id)tags
                        token:(NSString *)token
                     complete:(Complete)complete
                         fail:(fail)fail;





/**17
 分页获取学生对老师的评论列表
 
 @param guid 学生id
 @param teacher_guid 老师ID
 @param pageSize 每页显示多少个
 @param page 第几页
 @param token Token
 @param complete 成功回调
 @param fail 回调失败
 */
+ (void)lxt_getTeacherCommentsGuid:(NSString *)guid
                      teacher_guid:(NSString *)teacher_guid
                          pageSize:(NSString *)pageSize
                              page:(NSString *)page
                             token:(NSString *)token
                          complete:(Complete)complete
                              fail:(fail)fail;








/**18
 获取进入教室参数
 
 @param guid 学生ID
 @param bespeak_guid 课程ID
 @param school_guid 学校ID
 @param deployType  部署环境  部署环境 LP_DEPLOY_TEST； LP_DEPLOY_BETA； LP_DEPLOY_WWW
 @param token Token
 @param complete 成功回调
 @param fail 回调失败
 */
+ (void)lxt_getClassConfigcompleteGuid:(NSString * )guid
                          bespeak_guid:(NSString *)bespeak_guid
                           school_guid:(NSString *)school_guid
                            deployType:(NSString *)deployType
                                 token:(NSString *)token
                              complete:(Complete)complete
                                  fail:(fail)fail;


/**19
获取个人上课评价信息
 
 @param guid 学生ID
 @param page 当前页数
 @param school_guid 校区ID
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_getStudentCurveGuid:(NSString *)guid
                          pages:(NSString *)page
                    school_guid:(NSString *)school_guid
                          token:(NSString *)token
                       complete:(Complete)complete
                           fail:(fail)fail;

/**20
 个人密码修改
 
 @param guid 学生ID
 @param school_guid 校区ID
 @param oldPasseord 老密码
 @param newPassword 新密码
 @param token Token
 @param complete 成功回调
 @param fail 失败回调
 */
+ (void)lxt_getChangePasswordGuid:(NSString *)guid
                      school_guid:(NSString *)school_guid
                      oldPassword:(NSString *)oldPasseord
                      newPassword:(NSString *)newPassword
                            token:(NSString *)token
                         complete:(Complete)complete
                             fail:(fail)fail;







@end
