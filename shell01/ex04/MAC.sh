#!/bin/bash

ifconfig -a | grep ether | grep -v media | awk '{print $2}'
