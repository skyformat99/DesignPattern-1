/**
 * @file OperationAdd.h
 * @author {Layne} ({shu_huanglei@163.com})
 * @brief
 * @version 0.1
 * @date 2019-11-26
 *
 * @copyright Copyright (c) 2019
 *
 */

#ifndef OPERATION_ADD_H_
#define OPERATION_ADD_H_

#include "Strategy.h"

class OperationAdd : public Strategy {
   public:
    OperationAdd() = default;
    virtual ~OperationAdd() = default;

    int DoOperation(int num1, int num2) override { return num1 + num2; }
};

#endif  // OPERATION_ADD_H_
