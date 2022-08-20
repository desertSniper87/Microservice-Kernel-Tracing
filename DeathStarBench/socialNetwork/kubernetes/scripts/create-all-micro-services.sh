
#cd ../.

NS="social-network"

kubectl create namespace ${NS}

for service in *service*.yaml ; do
  kubectl apply -f $service -n ${NS}
done

# cd - >/dev/null
