//
// Created by jack.zhou on 2018/9/2.
//

#ifndef FILESPLITOR_FUNCTION_H
#define FILESPLITOR_FUNCTION_H

#endif //FILESPLITOR_FUNCTION_H

/**
 * 分割文件
 *
 * @param srcPath 源视频
 * @param count 分割数量
 * @param outPaths 分割文件路径列表
 * @return 1 成功；C语言不存在布尔类型，通用1表示true，0表示false
 *
 */
int split_file(char *srcPath, int count, char **outPaths);

/**
 * 合并文件
 *
 * @param srcPath 待合并的文件列表
 * @param outPath 合并产物路径
 * @return 1 成功
 */
int merge_files(char srcPath[], char *outPath);


