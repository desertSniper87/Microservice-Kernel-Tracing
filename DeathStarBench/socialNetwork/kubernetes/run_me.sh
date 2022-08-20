#!/usr/bin/env sh

NS=social-network

minikube stop; minikube delete; minikube start #minikube_reset

kubectl create namespace ${NS}

for config in scripts/configmaps/create-*; do
    sh $config
done


./scripts/deploy-all-services-and-configurations.sh

watch -n10 'kubectl get pods -n $NS'
